size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t i;
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dst_len >= dstsize || dstsize == 0)
		return (src_len + dstsize);
	while (*src && i + 1 < dstsize)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
