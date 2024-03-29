
[alias]
	# commit-status: generate a commit with message from git-status (staged changes).
	# Source: https://gist.github.com/erikw/654386d35ecfdb0354cd2b71763f19ae
	# Explanation:
	# - Get only staged changes
	# - Ignore changes in working area (2nd letter, the Y in XY as explained in $(git help status))
	# - + split label and file path to separate lines so we can process the labels separately
	# - Keep only the first label using awk
	# - Add newline before each label section so we later can truncate \n to put everything on one line
	# - Make labels human readable e.g. M -> Modified
	# - Put everything on one line and trim leading & trailing whitespaces
	commit-status = !" \
	        TMPFILE=$(mktemp /tmp/git-commit-status-message.XXX); \
		git status --porcelain \
		  | grep '^[MARCDT]' \
		  | sort \
		  | sed -re 's/^([[:upper:]])[[:upper:]]?[[:space:]]+/\\1:\\n/' \
		  | awk '!x[$0]++' \
		  | sed -re 's/^([[:upper:]]:)$/\\n\\1/' \
		  | sed -re 's/^M:$/Modified: /' \
		  | sed -re 's/^A:$/Added: /' \
		  | sed -re 's/^R:$/Renamed: /' \
		  | sed -re 's/^C:$/Copied: /' \
		  | sed -re 's/^D:$/Deleted: /' \
		  | sed -re 's/^T:$/File Type Changed: /' \
		  | tr '\n' ' ' | xargs \
		  > $TMPFILE; \
		  cat $TMPFILE; \
	        commit=''; \
	        while :; do \
			echo '> Commit with this message? [Yn]: '; \
			read commit; \
			([ -z \"$commit\" ] || [ \"$commit\" = y ] || [ \"$commit\" = Y ] || [ \"$commit\" = n ]) && break; \
	        done; \
		test \"$commit\" != n || exit; \
		git commit -F $TMPFILE; \
		rm -f $TMPFILE \
		"




	# If you want to have a [Yn] prompt showing the commit message before making the commit,
	# then simply inject the following lines below in to the alias above just before the
	# "git commit -F $TMPFILE; \" line:
		cat $TMPFILE; \
	        commit=''; \
	        while :; do \
			echo '> Commit with this message? [Yn]: '; \
			read commit; \
			([ -z \"$commit\" ] || [ \"$commit\" = y ] || [ \"$commit\" = Y ] || [ \"$commit\" = n ]) && break; \
	        done; \
		test \"$commit\" != n || exit; \

#git add -v * && git commit -m "commit from : " && git push