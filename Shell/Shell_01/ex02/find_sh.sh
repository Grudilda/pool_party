find -name "*.sh" | tr '.' '/' | awk -F"/" '{print $(NF-1)}'
