<?xml version='1.0' encoding='UTF-8' standalone='yes' ?>
<tagfile doxygen_version="1.9.8">
  <compound kind="file">
    <name>example.h</name>
    <path>/home/runner/work/LibC/LibC/include/_platforms/</path>
    <filename>example_8h.html</filename>
    <includes id="libc__common_8h" name="libc_common.h" local="no" import="no" module="no" objc="no">libc_common.h</includes>
    <class kind="struct">_platform_mcontext</class>
    <class kind="struct">_struct_platform_locale</class>
    <member kind="typedef">
      <type>struct _struct_platform_locale</type>
      <name>_platform_locale</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a0c36e2d1c643e0a1c398628fd9601e5e</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_exit</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>ae1b63037a88382380096b2887a67ca33</anchor>
      <arglist>(int code)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_execve</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a1b534969e39e821c138d9ea2a4a63710</anchor>
      <arglist>(char *name, char **argv, char **env)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_fork</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>aa4566ae5a72d24d705ac64404f550991</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_getpid</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>affbc9aef4e1dd7a9e3c096d8a823ad16</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_kill</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a157ea78ac249fb55b42e39bba030a953</anchor>
      <arglist>(int pid, int sig)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_times</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a9c1fbc82b15e15585081195edcfb67e8</anchor>
      <arglist>(struct tms *buf)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_wait</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a2fcb87a692312dff85e3b193f87691c7</anchor>
      <arglist>(int *status)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_close</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a3b75d86668922072a81913767577baa9</anchor>
      <arglist>(int file)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_fstat</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a227554b85a13993a03382978eee7369f</anchor>
      <arglist>(int file, struct stat *st)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_isatty</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a0d6522555e0c3221c3a3b6ac334ac44c</anchor>
      <arglist>(int file)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_link</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>ae225d06b2a9fcfd9748786227458cd87</anchor>
      <arglist>(char *old, char *new)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_lseek</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a5ba113706cb2f3e1ba7462180329201a</anchor>
      <arglist>(int file, int ptr, int dir)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_open</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>adc37e719bf0cf11b69ff75d3bdff3992</anchor>
      <arglist>(const char *name, int flags, int mode)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_read</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a145fb80b276359090e2560d598ce07c4</anchor>
      <arglist>(int file, char *ptr, int len)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_stat</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a746353f3eb589715fbfde3426b2b5496</anchor>
      <arglist>(char *file, struct stat *st)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_unlink</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>addddeefe5b7e1900313ad3ac1b187070</anchor>
      <arglist>(char *name)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_write</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>aed6272e5e1ef183d9d8e737e862e448c</anchor>
      <arglist>(int file, char *ptr, int len)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>_platform_sbrk</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>aa208c563a4442d7c71385f9eecebef5e</anchor>
      <arglist>(int incr)</arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>__env</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>a5428d66981cb84e60b899495874618b2</anchor>
      <arglist>[1]</arglist>
    </member>
    <member kind="variable">
      <type>char **</type>
      <name>environ</name>
      <anchorfile>example_8h.html</anchorfile>
      <anchor>aa006daaf11f1e2e45a6ababaf463212b</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>aio.h</name>
    <path>/home/runner/work/LibC/LibC/include/</path>
    <filename>aio_8h.html</filename>
    <includes id="types_8h" name="types.h" local="no" import="no" module="no" objc="no">sys/types.h</includes>
    <includes id="time_8h" name="time.h" local="no" import="no" module="no" objc="no">time.h</includes>
    <includes id="signal_8h" name="signal.h" local="no" import="no" module="no" objc="no">signal.h</includes>
    <class kind="struct">aiocb</class>
    <member kind="define">
      <type>#define</type>
      <name>AIO_ALLDONE</name>
      <anchorfile>aio_8h.html</anchorfile>
      <anchor>a96fdf4481a5be4289335752cdfe2d1d8</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>AIO_CANCELED</name>
      <anchorfile>aio_8h.html</anchorfile>
      <anchor>ad025933a3c08268888f60a584d03961a</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>AIO_NOTCANCELED</name>
      <anchorfile>aio_8h.html</anchorfile>
      <anchor>aae60cf63600169228f13e661c8ca8256</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LIO_NOP</name>
      <anchorfile>aio_8h.html</anchorfile>
      <anchor>a7e33ece0a2433714d7bf1ccf183a294e</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LIO_WRITE</name>
      <anchorfile>aio_8h.html</anchorfile>
      <anchor>a6e4b2bc060140597b36585a5568ce071</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LIO_READ</name>
      <anchorfile>aio_8h.html</anchorfile>
      <anchor>a72369fbe46a0e1632afb1eac1340ae76</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LIO_WAIT</name>
      <anchorfile>aio_8h.html</anchorfile>
      <anchor>a6643367cfb016dbacaef01c4ef3706b0</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LIO_NOWAIT</name>
      <anchorfile>aio_8h.html</anchorfile>
      <anchor>aed8f2a06da21fad02bfc0e5749a8ecca</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>errno.h</name>
    <path>/home/runner/work/LibC/LibC/include/</path>
    <filename>errno_8h.html</filename>
    <includes id="libc__common_8h" name="libc_common.h" local="no" import="no" module="no" objc="no">libc_common.h</includes>
    <member kind="define">
      <type>#define</type>
      <name>EPERM</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>add669d31505a077f769cff8e66c780b3</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOENT</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a03e689f378f643d16ea7537918528a48</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ESRCH</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a462e47a8af6288232a5df548221ada4c</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EINTR</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a46b83d9f6c23b1b65a8cecfd775ddaed</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EIO</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a70979f50f9c83e5aebab3d6a1bd4cf35</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENXIO</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a2b3884b11e4932bd372bb6d899d6fbfe</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>E2BIG</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>aba8481985c201ff726f349d7f2d09895</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOEXEC</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a4d0b1b435ec441e7d50a430b83df5832</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EBADF</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ac54507d66b43ad12f9356257323c0018</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ECHILD</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a47b42c351e0e011a048058d224205c0f</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EAGAIN</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>af0fac1cea1165b4debec7f686edf3313</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOMEM</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a6a05c923dad0c1208043e9c20a58c8e5</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EACCES</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ac2a2e9fa555401f94478f74e01868032</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EFAULT</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a3f317946e043623f9d6b93dbf60e6316</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOTBLK</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>aa0a4b0e307e83f52be51099f01156936</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EBUSY</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a8368025077a0385849d6817b2007c095</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EEXIST</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a0a3bef9e5c47e42917692b5dae3b5498</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EXDEV</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a3396cf9fb0ff5af3a18dd2a2bbdb21e1</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENODEV</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ab9b8cc17d1947160d13faaba7a18d6d1</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOTDIR</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a9262fb92f7ef662d0bdd577912a5b101</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EISDIR</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ae22c3a1e0a38f3896de238cc30d0e19b</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EINVAL</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a2d1678d5a7cc8ce499643f3b8957def4</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENFILE</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a5554094b3fb4bb6ebeb0157cb3f82a55</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EMFILE</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a64a75c174882ddbfa726c7fd040f87a1</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOTTY</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ac3daf409082bb528032f4452a81e1034</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ETXTBSY</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>aaed12e82224923d599b6f1939c8e0971</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EFBIG</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>af5401a500939ed1812c04ca200b95eef</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOSPC</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a088abe8bad2df798edad3053d719b937</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ESPIPE</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a0e42d4f9fecdcf5fcca2b333252173c3</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EROFS</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>acb02bb67dddd7ca8cf82634a0781d58d</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EMLINK</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a97f59fa1a5a2f61b792c1b9dfc218072</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EPIPE</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a5f8d33deb08fa27c04897b278ac7f965</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EDOM</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a5fe247e079b591a68e0fdbf7caec5b70</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ERANGE</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>aa1591a4f3a86360108de5b9ba34980ca</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOMSG</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ae40596feaa3f66f5440b485bf7c1c2d1</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EIDRM</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ad9913290fef890d46a6b7e8b4bfb1c29</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EDEADLK</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a55cc70ce0ba661298f3c412095dfeeb6</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOLCK</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a65e1a7bda392be276a701988d0604e63</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOSTR</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a7cea86ddbdacae0b391674e680f17bdb</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENODATA</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a0030614bc864d1b24eaedd71585acc27</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ETIME</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ab59cf3c65eaf836d5c647fa2a24ca649</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOSR</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ad88bc6ea94ec1a5e91d3651677d85c00</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOLINK</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>add4408349a756880be9d91efadb8aed0</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EPROTO</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a5a92de56e8ebe19cbd8a2ce8c80ad03e</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EBADMSG</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a251e9b536ed96ccb16aa28ca2d5bd656</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EFTYPE</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a940ffe53c91c0b90f8188122ea1bdbf0</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOSYS</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a43785b9969e0bd1af532dbde06c5540b</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOTEMPTY</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>aa0f602f3fd369a6fede82190710b9c5c</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENAMETOOLONG</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a41d5ab3a8a05f9c5eab536c9cfba305b</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ELOOP</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a2f78c246352d2bf2f19dc5d43da2f0c9</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EOPNOTSUPP</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a4b807895c74cea4d0302bf27725d4b9d</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EPFNOSUPPORT</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a871b9fabb281dbc2d3b81cb79c163c20</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ECONNRESET</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>add4258b08af02fbe4590fbaae7260037</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOBUFS</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a9e655f47bfd914a1174f281fc31cf63d</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EAFNOSUPPORT</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a4c3a793b4d51cb7dd020af92e536fe21</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EPROTOTYPE</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ae6014faa948366b8321d755204acf755</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOTSOCK</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ae34fa7a550ac1c415daa2e114a1c0f38</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOPROTOOPT</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>acd570f8ab92198653b4459773dc3bca3</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ECONNREFUSED</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>aad88020b394ef1aa4af2f4ef9b4c8b39</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EADDRINUSE</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a61676e39b42371c65c3b960a91887b03</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ECONNABORTED</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a45342991e001e28bbf87916d92b7e09a</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENETUNREACH</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a3f91f1ad503432783c7a5d1481b45419</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENETDOWN</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>aac51995026fa19cdd0ad84a272304af0</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ETIMEDOUT</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a597718e59a8fc9c4d4ab63f5a34e28b1</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EHOSTDOWN</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>aa92bcaf70544db6998f4c503026359c5</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EHOSTUNREACH</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a53e186028fc992c3341ccb0d4d239b24</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EINPROGRESS</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a6c045d5be06e715cc335784a7320714e</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EALREADY</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>aa4ccb54aa806de3e41a8515f06db85d4</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EDESTADDRREQ</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a0e416d3478cf030e37e90c55d68ad97a</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EMSGSIZE</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ae37becfaa095a9df5c5c788bce5aa06f</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EPROTONOSUPPORT</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ad581c46fdd4dee9419f60eaff40415e7</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EADDRNOTAVAIL</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a556612e55358838192165684c971a44f</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENETRESET</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a92750db73ff8e83591c977bbb3a5bea1</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EISCONN</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a164ca8549da7a385e2fe1cba823b9eaf</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOTCONN</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>af23e48762a0676f49d480db91cfd5e4b</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ETOOMANYREFS</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a10426080250efba47f4aaf254036ff00</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EDQUOT</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>aa5a48566b00cf9062d9deeeb0682cdaf</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ESTALE</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a09e189d2214d9fe2847d27bf270ca1d7</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOTSUP</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a91457bbf35f0f1085619a99423bb1f33</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EILSEQ</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ac6c071293826a4e66a717bb38db7794d</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EOVERFLOW</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a888552a5e3c78b5883904cf5d55244ab</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ECANCELED</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a9532d840ef91fd8e1ecc5d7ca7cbf212</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ENOTRECOVERABLE</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>ac69acb8e9e296867cc3f9fdf4223d05d</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EOWNERDEAD</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>af3f021d87caf24b44761036578c7beae</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EWOULDBLOCK</name>
      <anchorfile>errno_8h.html</anchorfile>
      <anchor>a4a3a0b3605fd3b2336455062ee8e25f0</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>libc_common.h</name>
    <path>/home/runner/work/LibC/LibC/include/</path>
    <filename>libc__common_8h.html</filename>
  </compound>
  <compound kind="file">
    <name>libc_platform_specifics.h</name>
    <path>/home/runner/work/LibC/LibC/include/</path>
    <filename>libc__platform__specifics_8h.html</filename>
  </compound>
  <compound kind="file">
    <name>locale.h</name>
    <path>/home/runner/work/LibC/LibC/include/</path>
    <filename>locale_8h.html</filename>
    <includes id="libc__common_8h" name="libc_common.h" local="no" import="no" module="no" objc="no">libc_common.h</includes>
    <includes id="stddef_8h" name="stddef.h" local="no" import="no" module="no" objc="no">stddef.h</includes>
    <class kind="struct">lconv</class>
    <member kind="define">
      <type>#define</type>
      <name>LC_ALL</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>a9cc5213b5dca4f8e48e64586ee444c33</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_COLLATE</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>aab9cf7b1a206fb75e5884934c8d676db</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_CTYPE</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>a07c66689961056725d7f50231d740ba9</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_MESSAGES</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>a7195d6f0a8d1b9d164a3988a1b8249e8</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_MONETARY</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>a6d033a83772ef6e6c10dbf13a6a58fb7</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_NUMERIC</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>a158abb82c565096465ade138c98970d0</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_TIME</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>aa652c62b53b6bf728d592bfbdc7d5852</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_ALL_MASK</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>aa46b0b4c5a3e1d02408b17283b8d9286</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_COLLATE_MASK</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>aa4b8e561df7b9f8044425523f39de1bd</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_CTYPE_MASK</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>aaeba48d44b0d79e96eb6432ec7d3f244</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_MESSAGES_MASK</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>a2196becdb2da0dd7a8b2ccb9bb421c91</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_MONETARY_MASK</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>ab986d749a1ffcad0d10d15a274b42e64</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_NUMERIC_MASK</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>a44e5a695ca5f7909b69b8fa2f96d1219</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_TIME_MASK</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>aad9656f9d2787537136f289d977aa485</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>LC_GLOBAL_LOCALE</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>a30c35e179a1346223ac650826472a704</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>_platform_locale</type>
      <name>locale_t</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>a54ef5b9f1228b5c543201712de161003</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumeration">
      <type></type>
      <name>SignPosition</name>
      <anchorfile>locale_8h.html</anchorfile>
      <anchor>ac12b0ed65a68725efe51166ba71d4739</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>signal.h</name>
    <path>/home/runner/work/LibC/LibC/include/</path>
    <filename>signal_8h.html</filename>
    <includes id="libc__common_8h" name="libc_common.h" local="no" import="no" module="no" objc="no">libc_common.h</includes>
    <includes id="types_8h" name="types.h" local="no" import="no" module="no" objc="no">sys/types.h</includes>
    <class kind="union">sigval</class>
    <class kind="struct">sigevent</class>
    <class kind="struct">_siginfo</class>
    <class kind="struct">sigaction</class>
    <class kind="struct">_stack</class>
    <class kind="struct">_ucontext</class>
    <member kind="define">
      <type>#define</type>
      <name>SIG_DFL</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a27d5dc561093d6243542e6a2465bc0f8</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIG_ERR</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a3c330fbddd84bf34e65af370b11998d6</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIG_IGN</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>acf0e499b0ac946b366b4f47a3b3e8b9e</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGEV_NONE</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aced9a66610d9d61756999ce4f103740e</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGEV_SIGNAL</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a06d5881eeb84e6ac35f5b801c380dbb6</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGEV_THREAD</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a29ccb6a17fa90a1357b478f62af7fca0</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>_NSIG</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a275020780cb70a8b0cba8db5accc5d19</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGRTMIN</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ae89f9a1282bd2d1b2a2b310c12ea16a5</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGRTMAX</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a5336d2c76af22b10373e3dd28fb3b0f0</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIG2STR_MAX</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ad4476ae1915c2247f142ca344a407971</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGHUP</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a136c64ec2d1306de745e39d6aee362ca</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGINT</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a487309e3e9e0527535644115204a639a</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGQUIT</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a62045b465be11891160d53c10861b16c</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGILL</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a4c9c5284f8c8d146bd7a93d25017fc62</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGTRAP</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aa2beb906ab1b46676e63823f4e773c38</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGABRT</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aa86c630133e5b5174ac970227b273446</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGBUS</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aead3d488474201acf18c4b63d91edc3c</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGFPE</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a7fbba29aec3e4a8daae12935299df92d</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGKILL</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>addd8dcd406ce514ab3b4f576a5343d42</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGUSR1</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a944a8250e34bfd7991123abd3436d8c0</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGSEGV</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ae20b4f7171a09516ea73c9d2745bd596</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGUSR2</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>abaaa61abe503c43481e35e21b0b5a031</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGPIPE</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a57e9c8c5fa13bf86bc779a9f6f408b7c</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGALRM</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aa6946723c6b7a86ec3c33caaf832840b</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGTERM</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a682182a5e5f38fd61f4311501e9dac5d</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGCHLD</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a0e63521a64cc8bc2b91d36a87d32c9f8</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGCONT</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a024f43063003e753afc6cca1acd6e104</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGSTOP</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a069e358bc9a864b7dc4fed2440eda14c</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGTSTP</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>abe65c086e01f0d286b7a785a7e3cdd1a</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGTTIN</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a2c146e34a6b5a78dfba41cded3331181</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGTTOU</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a782864287613e2c5c030411fa9c5e9b1</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGURG</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ad9ff13149e36144a4ea28788948c34dd</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGXCPU</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a7265cbba4972503c1c30a2e52a929874</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGXFSZ</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a75440a7aa885a1052dfd3b4393fd9baa</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGVTALRM</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a71403d2f5240e409e213060ea3301851</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGPROF</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ab6bd2a2ff7e58d45965ef257f96dfe65</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGWINCH</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a13ba0e7c4365813312eb4566907bce4f</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGSYS</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a8bacf9eb18fd539099c1bb4666c45d60</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIG_BLOCK</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a927f6ae16379576d638006c7498ac5d7</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIG_UNBLOCK</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a5fcd73313a63dac2cc7eb3b654215250</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIG_SETMASK</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a37750b78b7ae75fe02ad26e70f6cc845</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SA_NOCLDSTOP</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>af6a71c97263725437f59ceb16241fd32</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SA_ONSTACK</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a322c220e296393958ab4238145a0d273</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SA_RESETHAND</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a8d5fb4f35858d31035e7354c1d4048ea</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SA_RESTART</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a74ef0a27afcf55b6cd6d35cf0fa5d427</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SA_SIGINFO</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a59b4c0774aace526b10b6d737075a790</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SA_NOCLDWAIT</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ae4c1aad864ef72e4a2cce74b1b8a5a0b</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SA_NODEFER</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>abec4abd80d73397fc2f78f57f178565f</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SS_ONSTACK</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a17bcfefa3c6fafd5d3277d867bd723fb</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SS_DISABLE</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ac515f2efc91c54803f65de08d14d4566</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>MINSIGSTKSZ</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aae6a742a8c5acf12caba1d148dd03f10</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SIGSTKSZ</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a8a433a10420a0c51355da26cfcab2131</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ILL_ILLOPC</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a41705eedb4a32e5b0b9a3ef98f98599c</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ILL_ILLOPN</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>af5f5854f70f082160b7e0656907a4ced</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ILL_ILLADR</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ab225825a0696d9341ea4569abdc954f0</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ILL_ILLTRP</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>adb1378440989b1b20f7ff358a91e3cb2</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ILL_PRVOPC</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>af7d4b4283e951ed0cb3cc33b2b451fd2</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ILL_PRVREG</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aa3bff56a3faabe1a3755fd77cda127b1</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ILL_COPROC</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ae8aca6f3472a885fb6d3948f8e1a5fa9</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>ILL_BADSTK</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ad16edcc255b0df2dd3572fc9256ef180</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>FPE_INTDIV</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>abc24569f7a193eff6381dd2212464a0a</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>FPE_INTOVF</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aa85ab73a55a64cf580afa3596c0d5a03</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>FPE_FLTDIV</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>af9bde83d81419c42660d5963159e3b12</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>FPE_FLTOVF</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>adb3c2df5b8d0979b8b26f89096a513b9</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>FPE_FLTUND</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aa48a81252484098176287529607bd275</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>FPE_FLTRES</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>add5139f33bb657877bb88e2c2b2084ab</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>FPE_FLTINV</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a4616f880b63120a93c1e4ac6a7aa3dae</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>FPE_FLTSUB</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a72463f25ca7c74964873c79b4fc3009d</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SEGV_MAPERR</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a289e4151377c06f31fd4295061de78d9</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SEGV_ACCERR</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aba23f74fc8d8b7f8826f6275422a5648</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>BUS_ADRALN</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a6ea334f3e9a67fbe0cce4c9738cc842a</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>BUS_ADRERR</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a2343c7bb80913e6f8d69ae3cd7bd6273</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>BUS_OBJERR</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a1b507e6736ff85de98cc1b0151f61d44</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>TRAP_BRKPT</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a79fcb87a23520cade78f77a4dd3142c6</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>TRAP_TRACE</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a16042a25974d31a1aff6f09bb6a7358a</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>CLD_EXITED</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a3e6df4a3087d9aa8ba11c61c38c9218c</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>CLD_KILLED</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a2d5941afd29bca8b8f74461cb97fe982</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>CLD_DUMPED</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>afe6e9bccf7df675f022a3e484a73461f</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>CLD_TRAPPED</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aa679c19d95672068f1e4a4673a15ff1c</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>CLD_STOPPED</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a1844847a22da24371fa347b959283916</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>CLD_CONTINUED</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>afad5fd60fd725025f0682ec2697d1b45</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SI_USER</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>af9e4986b4f6bb9bd932b2fc8166301b9</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SI_QUEUE</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a4f23f53a46f88a96a0f28e23f7a9bad6</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SI_TIMER</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ab57ec52e57fbb49071f96f255bc7c31b</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SI_ASYNCIO</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aa8ff6c6d4af21cf9380de1e8fef9db4c</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SI_MESGQ</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>afdf808efb3ebd166f67910156146c8fc</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>struct _platform_mcontext</type>
      <name>mcontext_t</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ac7df60dc21a76ab73acc739e06f144b5</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>struct _stack</type>
      <name>stack_t</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>aca51d9a1c3b1ac1b2b54ed9dd7c26981</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>struct _ucontext</type>
      <name>ucontext_t</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a69b75656171a47d0fa604a66afc97b3b</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>kill</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a15f175029d9839bc5de63d726c0cc610</anchor>
      <arglist>(pid_t, int)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>killpg</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ad58b5094e7a641d20eb1faa55c5a03f2</anchor>
      <arglist>(pid_t, int)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>pthread_kill</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>ab01027d3834f9f9a5e7f245b4e2d8025</anchor>
      <arglist>(pthread_t, int)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>raise</name>
      <anchorfile>signal_8h.html</anchorfile>
      <anchor>a3e2d42c4a71136a5b06d2c1abb8a8e5f</anchor>
      <arglist>(int)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>stddef.h</name>
    <path>/home/runner/work/LibC/LibC/include/</path>
    <filename>stddef_8h.html</filename>
    <includes id="libc__common_8h" name="libc_common.h" local="no" import="no" module="no" objc="no">libc_common.h</includes>
    <member kind="define">
      <type>#define</type>
      <name>NULL</name>
      <anchorfile>stddef_8h.html</anchorfile>
      <anchor>a070d2ce7b6bb7e5c05602aa8c308d0c4</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>offsetof</name>
      <anchorfile>stddef_8h.html</anchorfile>
      <anchor>afd049f7ad59dbe455f460807475c2841</anchor>
      <arglist>(type, member)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>stdint.h</name>
    <path>/home/runner/work/LibC/LibC/include/</path>
    <filename>stdint_8h.html</filename>
    <includes id="libc__common_8h" name="libc_common.h" local="no" import="no" module="no" objc="no">libc_common.h</includes>
  </compound>
  <compound kind="file">
    <name>stdlib.h</name>
    <path>/home/runner/work/LibC/LibC/include/</path>
    <filename>stdlib_8h.html</filename>
    <includes id="libc__common_8h" name="libc_common.h" local="no" import="no" module="no" objc="no">libc_common.h</includes>
    <includes id="stddef_8h" name="stddef.h" local="no" import="no" module="no" objc="no">stddef.h</includes>
    <includes id="wait_8h" name="wait.h" local="no" import="no" module="no" objc="no">sys/wait.h</includes>
    <class kind="struct">_div</class>
    <class kind="struct">_ldiv</class>
    <class kind="struct">_lldiv</class>
    <member kind="define">
      <type>#define</type>
      <name>EXIT_FAILURE</name>
      <anchorfile>stdlib_8h.html</anchorfile>
      <anchor>a73efe787c131b385070f25d18b7c9aa4</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>EXIT_SUCCESS</name>
      <anchorfile>stdlib_8h.html</anchorfile>
      <anchor>a687984f47d8cce148d1b914d2b79612a</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>RAND_MAX</name>
      <anchorfile>stdlib_8h.html</anchorfile>
      <anchor>a690f251553b39fd4f31894826141b61a</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>MB_CUR_MAX</name>
      <anchorfile>stdlib_8h.html</anchorfile>
      <anchor>a5455b7a60d7e3087ec55dfe37a088bd1</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>struct _div</type>
      <name>div_t</name>
      <anchorfile>stdlib_8h.html</anchorfile>
      <anchor>a5500c64d40d227603237f92ff22da88c</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>struct _ldiv</type>
      <name>ldiv_t</name>
      <anchorfile>stdlib_8h.html</anchorfile>
      <anchor>ad44f01bd6b0f8584760645d18c9fbb9a</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>struct _lldiv</type>
      <name>lldiv_t</name>
      <anchorfile>stdlib_8h.html</anchorfile>
      <anchor>ac3e4182ecf00f5533bd8eef4fc09f3e9</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>stat.h</name>
    <path>/home/runner/work/LibC/LibC/include/sys/</path>
    <filename>stat_8h.html</filename>
    <includes id="libc__common_8h" name="libc_common.h" local="no" import="no" module="no" objc="no">libc_common.h</includes>
    <includes id="types_8h" name="types.h" local="no" import="no" module="no" objc="no">sys/types.h</includes>
    <includes id="time_8h" name="time.h" local="no" import="no" module="no" objc="no">time.h</includes>
    <class kind="struct">stat</class>
    <member kind="define">
      <type>#define</type>
      <name>S_IFMT</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>ab5bee51e9ee68b83ab11d4b340f7200b</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>_S_IFMTE</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a2c5301de929ee95d2e7039e97c9213dd</anchor>
      <arglist>(m)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_IFIFO</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a4966f25d9f03a7a06bc47ac729fd86cf</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_IFCHR</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>aef3a1d1ba22c83e30b5c834dd343b2a8</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_IFDIR</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a11fb0652b963a735f3377eb1c9239f2d</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_IFBLK</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a5c5b74a1cb1a1ae83572500b94e1938f</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_IFREG</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a1aaa48b192a5dd3b6d7ee91fc98cd17d</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_IFLNK</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>afef163ce62372757e84bd9fc88c07aad</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_IFSOCK</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a28e80cd43106882904be148b2a397d42</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_ISFIFO</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a777b706bbe9e7920c091aaa2b547b093</anchor>
      <arglist>(m)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_ISCHR</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a767b5d0691f435f8a9b7f5e0fa97a645</anchor>
      <arglist>(m)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_ISDIR</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a70b64ed67c0ab484b4ba09487da34e91</anchor>
      <arglist>(m)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_ISBLK</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a722eba7370eb3b0aafb3272182e08520</anchor>
      <arglist>(m)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_ISREG</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>abf68371159fa46b5cc47d0f3ac9ab723</anchor>
      <arglist>(m)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_ISLNK</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a835359614ec43fbd96f53993cde84ef2</anchor>
      <arglist>(m)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_ISSOCK</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a765304585be8c05f7fa72495e6d5881f</anchor>
      <arglist>(m)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_TYPEISMQ</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a2ec90d83cf9b4cebb992bf7ae14834a9</anchor>
      <arglist>(buf)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_TYPEISSEM</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>af8dc35c23764f873fe25a75e1d2af5fd</anchor>
      <arglist>(buf)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_TYPEISSHM</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>aaf2ff74931dd70e55c38e3c253fd0404</anchor>
      <arglist>(buf)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>S_TYPEISTMO</name>
      <anchorfile>stat_8h.html</anchorfile>
      <anchor>a4a7b21459dbe56d9a550da3df7d27fd4</anchor>
      <arglist>(buf)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>types.h</name>
    <path>/home/runner/work/LibC/LibC/include/sys/</path>
    <filename>types_8h.html</filename>
    <includes id="libc__common_8h" name="libc_common.h" local="no" import="no" module="no" objc="no">libc_common.h</includes>
    <includes id="stdint_8h" name="stdint.h" local="no" import="no" module="no" objc="no">stdint.h</includes>
    <member kind="typedef">
      <type>int64_t</type>
      <name>blksize_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a54a3f3432318e662fb6d146a8fb6583e</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uint64_t</type>
      <name>fsblkcnt_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a433675badef7830d33e064a24b30fa7d</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uint64_t</type>
      <name>fsfilcnt_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a7ede1e89a8bf3ecec361bde5f7812d1d</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uint64_t</type>
      <name>ino_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a05e26458c6a667897adbdb68b1ad6857</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uint64_t</type>
      <name>nlink_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>aae921edb33395034051c64191932476a</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uint64_t</type>
      <name>off_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a2cb84cf5f02a29b7e8f237ff151a9225</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uint32_t</type>
      <name>mode_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>af8f4385bb42836d1e3ad4fea9d71d1b9</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int64_t</type>
      <name>clock_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a0001c50514d27f51d408e051dc803ad4</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int32_t</type>
      <name>clockid_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>af509d60daf16ea1bc4dea76b031a9b9d</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int64_t</type>
      <name>time_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a7f5991675a84025dc7c24754a9b257c0</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int64_t</type>
      <name>suseconds_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a9689b50d0507478638692894336b075a</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uintptr_t</type>
      <name>timer_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a9dd0dacc783676cb738527412a5af622</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uint64_t</type>
      <name>dev_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a25ab4acd63db23ce8ebc580b48d6c32f</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int32_t</type>
      <name>key_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a9249febbd0613dbf36b0a41fbc39fce0</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int32_t</type>
      <name>pid_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a4da13e794717e169a75d9705a62b6f41</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uint32_t</type>
      <name>id_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a513ee83176411bfc889c87bff2f5b6e4</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>id_t</type>
      <name>uid_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>ac3a43da508f85d45f051350c795555e9</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>id_t</type>
      <name>gid_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a9582384179b9d7b209d2e5b0cd0ab240</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uintptr_t</type>
      <name>pthread_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a5a968e6376296a133fae83572d4b2efc</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uint32_t</type>
      <name>pthread_key_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a8fd226393057ab7a8b17ac1c8b061911</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>int32_t</type>
      <name>pthread_once_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a9584d2baf917d0c8ab746ca54abebd43</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uintptr_t</type>
      <name>pthread_attr_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a97e6d323c24b1e1345abe5a1b3f8e1f1</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uint32_t</type>
      <name>trace_id_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>addbc8a24b3014b76c182f5696cd50963</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uint32_t</type>
      <name>trace_event_id_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>ad7d4ea5d8e191ae9d4bf5fac416220ee</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uintptr_t</type>
      <name>trace_attr_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a6f03dd837e5e9af5edd32d1a9ff94180</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>uintptr_t</type>
      <name>trace_event_set_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>ac9bbf7934a34822b2aa2f0079e30085b</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>__SIZE_TYPE__</type>
      <name>size_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>aa9d55e2f20e580b7445617d0d12fff6e</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>typedef</type>
      <name>__typeof__</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a09c26fcad913653acdc033b76b81b31a</anchor>
      <arglist>((size_t) 0 - 1) ssize_t</arglist>
    </member>
    <member kind="variable">
      <type>CPP_START typedef int64_t</type>
      <name>blkcnt_t</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>adb459904d3e5fc81ad4c7cc8f47fd845</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>wait.h</name>
    <path>/home/runner/work/LibC/LibC/include/sys/</path>
    <filename>wait_8h.html</filename>
    <includes id="libc__common_8h" name="libc_common.h" local="no" import="no" module="no" objc="no">libc_common.h</includes>
    <includes id="types_8h" name="types.h" local="no" import="no" module="no" objc="no">sys/types.h</includes>
    <includes id="signal_8h" name="signal.h" local="no" import="no" module="no" objc="no">signal.h</includes>
    <member kind="define">
      <type>#define</type>
      <name>WCONTINUED</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>afcc090a70f53d677b748f4b1a4b896e6</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WNOHANG</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>afa288d86b242c3005425a9c0f1682544</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WUNTRACED</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>aecac6945e3b08baa2602557c684d6bfe</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WEXITED</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>a004990811e046790b928dbc7787ecfaa</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WNOWAIT</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>a68e8ee6dc7b0115ddc033d974792fa94</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WSTOPPED</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>a34c9a2f671a03d4523a4e7d9642f908f</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>__WSTATUS_SIGNAL_BITS</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>affd21962b612827bfb2de8e398d3128f</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>__WSTATUS_SIGNAL_MASK</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>abaa8849030b372083f4fd07ad3ebd942</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>__WSTATUS_COREDUMP_BIT</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>a9998d9f29f40413b9a96cadb0a979404</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>__WSTATUS_LOW_MASK</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>a33d0efe02415e12c0d713c6c2d20f8c2</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>__WSTATUS_HIGH_SHIFT</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>ac9e5d606cb3e28e6f8fa3d3408c0f7cc</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>__WSTATUS_HIGH_MASK</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>a21e713563c84f0158d9c0087f5d6576b</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>__WSTATUS_STOP_MASK</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>a1ec60e6b424e2ead045e300e369ab410</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WIFEXITED</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>aa5fda3caf01a15f80a9f2542ccc67b94</anchor>
      <arglist>(status)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WIFSIGNALED</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>add863a14eeaad9d01db1bae7e46aff1a</anchor>
      <arglist>(status)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WIFSTOPPED</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>aa2687811d048892a4fa1f14f74843767</anchor>
      <arglist>(status)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WIFCONTINUE</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>ad0f383987537eb00f5ed77e2e446a251</anchor>
      <arglist>(status)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WEXITSTATUS</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>a994f3ec0987124479e11fcfb60f0d6ba</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WTERMSIG</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>a4f052f78fa094f1bca94a783669bb756</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>WSTOPSIG</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>aa92e07a0d3579b31e516f96335889bc7</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef">
      <type>enum _IDType</type>
      <name>idtype_t</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>a0f6e7ffb9bfd4d17b665b16c3b1c2b1e</anchor>
      <arglist></arglist>
    </member>
    <member kind="enumeration">
      <type></type>
      <name>_IDType</name>
      <anchorfile>wait_8h.html</anchorfile>
      <anchor>adb908bb79198d5a464610bf8dd9acb78</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>time.h</name>
    <path>/home/runner/work/LibC/LibC/include/</path>
    <filename>time_8h.html</filename>
    <includes id="libc__common_8h" name="libc_common.h" local="no" import="no" module="no" objc="no">libc_common.h</includes>
    <includes id="locale_8h" name="locale.h" local="no" import="no" module="no" objc="no">locale.h</includes>
    <includes id="types_8h" name="types.h" local="no" import="no" module="no" objc="no">sys/types.h</includes>
    <includes id="signal_8h" name="signal.h" local="no" import="no" module="no" objc="no">signal.h</includes>
    <class kind="struct">tm</class>
    <class kind="struct">timespec</class>
    <class kind="struct">itimerspec</class>
    <member kind="define">
      <type>#define</type>
      <name>CLOCKS_PER_SEC</name>
      <anchorfile>time_8h.html</anchorfile>
      <anchor>a3d9fc3c745d0880902fe3ea3d5d5f71e</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>CLOCK_MONOTONIC</name>
      <anchorfile>time_8h.html</anchorfile>
      <anchor>a6fb83f5e91e704391ff796553d5e0f46</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>CLOCK_PROCESS_CPUTIME_ID</name>
      <anchorfile>time_8h.html</anchorfile>
      <anchor>ae1c3939a1e7b7cd1e5a4a7fa601cc4e9</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>CLOCK_REALTIME</name>
      <anchorfile>time_8h.html</anchorfile>
      <anchor>a922ce1ae64374c9410c8a999e25e82af</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>CLOCK_THREAD_CPUTIME_ID</name>
      <anchorfile>time_8h.html</anchorfile>
      <anchor>a30114e19c18f57f83727bcaba2458f1e</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>TIMER_ABSTIME</name>
      <anchorfile>time_8h.html</anchorfile>
      <anchor>adde83d9ea51f12d4149f016eededde54</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>example.c</name>
    <path>/home/runner/work/LibC/LibC/src/_platforms/</path>
    <filename>example_8c.html</filename>
    <includes id="errno_8h" name="errno.h" local="no" import="no" module="no" objc="no">errno.h</includes>
    <includes id="stat_8h" name="stat.h" local="no" import="no" module="no" objc="no">sys/stat.h</includes>
    <includes id="example_8h" name="example.h" local="no" import="no" module="no" objc="no">_platforms/example.h</includes>
    <member kind="function">
      <type>int</type>
      <name>_platform_exit</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>ae1b63037a88382380096b2887a67ca33</anchor>
      <arglist>(int code)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_execve</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>a1b534969e39e821c138d9ea2a4a63710</anchor>
      <arglist>(char *name, char **argv, char **env)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_fork</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>aa4566ae5a72d24d705ac64404f550991</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_getpid</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>affbc9aef4e1dd7a9e3c096d8a823ad16</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_kill</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>a157ea78ac249fb55b42e39bba030a953</anchor>
      <arglist>(int pid, int sig)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_times</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>a9c1fbc82b15e15585081195edcfb67e8</anchor>
      <arglist>(struct tms *buf)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_wait</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>a2fcb87a692312dff85e3b193f87691c7</anchor>
      <arglist>(int *status)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_close</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>a3b75d86668922072a81913767577baa9</anchor>
      <arglist>(int file)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_fstat</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>a227554b85a13993a03382978eee7369f</anchor>
      <arglist>(int file, struct stat *st)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_isatty</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>a0d6522555e0c3221c3a3b6ac334ac44c</anchor>
      <arglist>(int file)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_link</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>ae225d06b2a9fcfd9748786227458cd87</anchor>
      <arglist>(char *old, char *new)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_lseek</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>a5ba113706cb2f3e1ba7462180329201a</anchor>
      <arglist>(int file, int ptr, int dir)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_open</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>adc37e719bf0cf11b69ff75d3bdff3992</anchor>
      <arglist>(const char *name, int flags, int mode)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_read</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>a145fb80b276359090e2560d598ce07c4</anchor>
      <arglist>(int file, char *ptr, int len)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_stat</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>a746353f3eb589715fbfde3426b2b5496</anchor>
      <arglist>(char *file, struct stat *st)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_unlink</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>addddeefe5b7e1900313ad3ac1b187070</anchor>
      <arglist>(char *name)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>_platform_write</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>aed6272e5e1ef183d9d8e737e862e448c</anchor>
      <arglist>(int file, char *ptr, int len)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>_platform_sbrk</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>aa208c563a4442d7c71385f9eecebef5e</anchor>
      <arglist>(int incr)</arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>__env</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>a5428d66981cb84e60b899495874618b2</anchor>
      <arglist>[1]</arglist>
    </member>
    <member kind="variable">
      <type>char **</type>
      <name>environ</name>
      <anchorfile>example_8c.html</anchorfile>
      <anchor>aa006daaf11f1e2e45a6ababaf463212b</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>aio.c</name>
    <path>/home/runner/work/LibC/LibC/src/</path>
    <filename>aio_8c.html</filename>
    <includes id="aio_8h" name="aio.h" local="no" import="no" module="no" objc="no">aio.h</includes>
  </compound>
  <compound kind="file">
    <name>crt0.c</name>
    <path>/home/runner/work/LibC/LibC/src/</path>
    <filename>crt0_8c.html</filename>
    <includes id="stdlib_8h" name="stdlib.h" local="no" import="no" module="no" objc="no">stdlib.h</includes>
    <member kind="function">
      <type>int</type>
      <name>main</name>
      <anchorfile>crt0_8c.html</anchorfile>
      <anchor>ae867ea66194fc0112526615a67b773cf</anchor>
      <arglist>(int, char **, char **)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>errno.c</name>
    <path>/home/runner/work/LibC/LibC/src/</path>
    <filename>errno_8c.html</filename>
    <includes id="errno_8h" name="errno.h" local="no" import="no" module="no" objc="no">errno.h</includes>
  </compound>
  <compound kind="file">
    <name>locale.c</name>
    <path>/home/runner/work/LibC/LibC/src/</path>
    <filename>locale_8c.html</filename>
    <includes id="locale_8h" name="locale.h" local="no" import="no" module="no" objc="no">locale.h</includes>
    <includes id="stdlib_8h" name="stdlib.h" local="no" import="no" module="no" objc="no">stdlib.h</includes>
  </compound>
  <compound kind="file">
    <name>signal.c</name>
    <path>/home/runner/work/LibC/LibC/src/</path>
    <filename>signal_8c.html</filename>
    <includes id="signal_8h" name="signal.h" local="no" import="no" module="no" objc="no">signal.h</includes>
    <includes id="errno_8h" name="errno.h" local="no" import="no" module="no" objc="no">errno.h</includes>
    <member kind="function">
      <type>int</type>
      <name>kill</name>
      <anchorfile>signal_8c.html</anchorfile>
      <anchor>a4539db972bcf3dd8c8b429af0dc3789d</anchor>
      <arglist>(pid_t pid, int sig)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>killpg</name>
      <anchorfile>signal_8c.html</anchorfile>
      <anchor>a7ffdc3cae8a7a29a324c1a86410597e1</anchor>
      <arglist>(pid_t pgid, int sig)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>pthread_kill</name>
      <anchorfile>signal_8c.html</anchorfile>
      <anchor>a5aafacc071cdfafd0eb992004dee3e62</anchor>
      <arglist>(pthread_t thread, int sig)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>raise</name>
      <anchorfile>signal_8c.html</anchorfile>
      <anchor>a08ba0dd26a850108a1746412faba2b21</anchor>
      <arglist>(int sig)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>stat.c</name>
    <path>/home/runner/work/LibC/LibC/src/sys/</path>
    <filename>stat_8c.html</filename>
    <includes id="stat_8h" name="stat.h" local="no" import="no" module="no" objc="no">sys/stat.h</includes>
  </compound>
  <compound kind="file">
    <name>time.c</name>
    <path>/home/runner/work/LibC/LibC/src/</path>
    <filename>time_8c.html</filename>
    <includes id="time_8h" name="time.h" local="no" import="no" module="no" objc="no">time.h</includes>
  </compound>
  <compound kind="struct">
    <name>__locale</name>
    <filename>struct____locale.html</filename>
  </compound>
  <compound kind="struct">
    <name>_div</name>
    <filename>struct__div.html</filename>
    <member kind="variable">
      <type>int</type>
      <name>quot</name>
      <anchorfile>struct__div.html</anchorfile>
      <anchor>a540848cea941067fcd8fa04a5bdb085d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>rem</name>
      <anchorfile>struct__div.html</anchorfile>
      <anchor>a8bdbcb0bbdbf765a8f3bfd66dce99b27</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>_ldiv</name>
    <filename>struct__ldiv.html</filename>
    <member kind="variable">
      <type>long</type>
      <name>quot</name>
      <anchorfile>struct__ldiv.html</anchorfile>
      <anchor>a2a065b6018ed677da8ab7e11f2396538</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>long</type>
      <name>rem</name>
      <anchorfile>struct__ldiv.html</anchorfile>
      <anchor>ad19eeb09e74bea9e40a8702bc2272345</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>_lldiv</name>
    <filename>struct__lldiv.html</filename>
    <member kind="variable">
      <type>long long</type>
      <name>quot</name>
      <anchorfile>struct__lldiv.html</anchorfile>
      <anchor>aa30367819ae170460a0583f6501c5b1e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>long long</type>
      <name>rem</name>
      <anchorfile>struct__lldiv.html</anchorfile>
      <anchor>ac41c1ccf75c0f80977f94c13aa04bbba</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>_platform_mcontext</name>
    <filename>struct__platform__mcontext.html</filename>
  </compound>
  <compound kind="struct">
    <name>_siginfo</name>
    <filename>struct__siginfo.html</filename>
    <member kind="variable">
      <type>int</type>
      <name>si_signo</name>
      <anchorfile>struct__siginfo.html</anchorfile>
      <anchor>aca1a2c089e702f59b517bd4235eec046</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>si_code</name>
      <anchorfile>struct__siginfo.html</anchorfile>
      <anchor>a712040067e6412f06661fb433f68408d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>si_errno</name>
      <anchorfile>struct__siginfo.html</anchorfile>
      <anchor>ace9837233cfd1fdb6901edca76103bda</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>pid_t</type>
      <name>si_pid</name>
      <anchorfile>struct__siginfo.html</anchorfile>
      <anchor>a8de69cc6ee1bf0c4c2453b3f3b575841</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>uid_t</type>
      <name>si_uid</name>
      <anchorfile>struct__siginfo.html</anchorfile>
      <anchor>aaa02d651f7dadfba3e7b4356ea8485d1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>void *</type>
      <name>si_addr</name>
      <anchorfile>struct__siginfo.html</anchorfile>
      <anchor>a42e4e56ca2db6f1aca00fd7d1513f44d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>si_status</name>
      <anchorfile>struct__siginfo.html</anchorfile>
      <anchor>ab7dfa04386cc55ae4e0cc6bf0880bac1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>union sigval</type>
      <name>si_value</name>
      <anchorfile>struct__siginfo.html</anchorfile>
      <anchor>ae6b597b93ca565b94ffaaf78e603808d</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>_stack</name>
    <filename>struct__stack.html</filename>
    <member kind="variable">
      <type>void *</type>
      <name>ss_sp</name>
      <anchorfile>struct__stack.html</anchorfile>
      <anchor>aa06044a4db77ebc4f97088917bfa3a40</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>ss_size</name>
      <anchorfile>struct__stack.html</anchorfile>
      <anchor>afc1c5f7f64dbf9fc480b663cd2600b16</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>ss_flags</name>
      <anchorfile>struct__stack.html</anchorfile>
      <anchor>ad5dd3ab0867b459702307db0ab80d087</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>_struct_platform_locale</name>
    <filename>struct__struct__platform__locale.html</filename>
  </compound>
  <compound kind="struct">
    <name>_ucontext</name>
    <filename>struct__ucontext.html</filename>
    <member kind="variable">
      <type>struct _ucontext *</type>
      <name>uc_link</name>
      <anchorfile>struct__ucontext.html</anchorfile>
      <anchor>a703c67f86822a956f83796a742c54634</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>sigset_t</type>
      <name>uc_sigmask</name>
      <anchorfile>struct__ucontext.html</anchorfile>
      <anchor>a975bdb372ce3f8b45c1a87c435953bfa</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>stack_t</type>
      <name>uc_stack</name>
      <anchorfile>struct__ucontext.html</anchorfile>
      <anchor>ae216c93ca6c0716aee829d048987cb29</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>mcontext_t</type>
      <name>uc_mcontext</name>
      <anchorfile>struct__ucontext.html</anchorfile>
      <anchor>a619823b2c887e14745e496dbc8db255c</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>aiocb</name>
    <filename>structaiocb.html</filename>
    <member kind="variable">
      <type>int</type>
      <name>aio_fildes</name>
      <anchorfile>structaiocb.html</anchorfile>
      <anchor>ad6b6e95e6e4a79487f7e6edaae26003f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>off_t</type>
      <name>aio_offset</name>
      <anchorfile>structaiocb.html</anchorfile>
      <anchor>a1e74b350a9ca189fa7c25b61c5cede6c</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>volatile void *</type>
      <name>aio_buf</name>
      <anchorfile>structaiocb.html</anchorfile>
      <anchor>a60a966202034e1abde4ca3ea0965fa30</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>aio_nbytes</name>
      <anchorfile>structaiocb.html</anchorfile>
      <anchor>a6b4f8a1d05ed5444784389734d71cda7</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>aio_reqprio</name>
      <anchorfile>structaiocb.html</anchorfile>
      <anchor>a7a8f63c080c8602ebcacbb86e9f5547e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct sigevent</type>
      <name>aio_sigevent</name>
      <anchorfile>structaiocb.html</anchorfile>
      <anchor>a7065f3086beb9cdffc525c1d09949268</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>aio_lio_opcode</name>
      <anchorfile>structaiocb.html</anchorfile>
      <anchor>a8a23597de7bfc422b58ec9816ced7d47</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>itimerspec</name>
    <filename>structitimerspec.html</filename>
    <member kind="variable">
      <type>struct timespec</type>
      <name>it_interval</name>
      <anchorfile>structitimerspec.html</anchorfile>
      <anchor>a27cedae552e2b2fe0993c1b2c4ff1889</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct timespec</type>
      <name>it_value</name>
      <anchorfile>structitimerspec.html</anchorfile>
      <anchor>a754dda918053251c24558b07571d6e8f</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>lconv</name>
    <filename>structlconv.html</filename>
    <member kind="variable">
      <type>char *</type>
      <name>decimal_point</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a445e27fc7f797c8cca97b381f062fb60</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>thousands_sep</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>aede8dfaac91d7b4e6b7fb0d96184d74d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>grouping</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a46e468755a823be50de20f36be5ff2be</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>currency_symbol</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>af3657bb8bf2a83a868cdeb0b108ab921</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>int_curr_symbol</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>abaeeafb02b68ba58c549458b196b9325</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>mon_decimal_point</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a1aa08afe707c1d5d40b4d01369176480</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>mon_thousands_sep</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a4f04f4fd9ea670d21fc76fb5c77c032d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>mon_grouping</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a12ecf5d2f7ceb0cfe0f66fd3200eef54</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>frac_digits</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>aa16e32ff4dcc95445742b5b165ffb071</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>int_frac_digits</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a6b652f28cafc3092258b47c8099fe905</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>positive_sign</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a74bf5f6f32624be629f7de0dabd58a96</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char *</type>
      <name>negative_sign</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a40dbb1b1d7fdf4926145138f5d8f6f5f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>p_cs_precedes</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>af0651922c77fc926609bdd8746784e63</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>n_cs_precedes</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>ad118b68a229527f7e96538ac875169ad</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>p_sep_by_space</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a3ae3cb36f4426158e4ab2ea6dc4278ad</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>n_sep_by_space</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>ab7ac20ce034900155183b32fc3c6d9a3</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>int_p_cs_precedes</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a1a78cbc82f07601c2acb643f8dffdf64</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>int_n_cs_precedes</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a36121c68c5571e40145365dd1edecbb7</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>int_p_sep_by_space</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>ae77e798ef92e86d58100b16fb8163443</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>int_n_sep_by_space</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>ad9cfa63e25f4a2aa02f6c7ca540177a2</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>p_sign_posn</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a1fdead36abe5c2ca673142ea401478e8</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>n_sign_posn</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>ae0bbe6f545952daef5a8cbdd054a184e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>int_p_sign_posn</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a266ed42f4bb087d1efac551940c42f6f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>int_n_sign_posn</name>
      <anchorfile>structlconv.html</anchorfile>
      <anchor>a642a9096f724fad40fe9f1711e92b323</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>sigaction</name>
    <filename>structsigaction.html</filename>
    <member kind="variable">
      <type>sighandler_t</type>
      <name>sa_handler</name>
      <anchorfile>structsigaction.html</anchorfile>
      <anchor>a0087bff9c76e53abfe8b2a527add0241</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>sigset_t</type>
      <name>sa_mask</name>
      <anchorfile>structsigaction.html</anchorfile>
      <anchor>a684e70081d03d46ce70af097ea5cfd49</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>sa_flags</name>
      <anchorfile>structsigaction.html</anchorfile>
      <anchor>aea0dabe7a03641c8b426521f4406b425</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>sigaction_handler_t</type>
      <name>sa_sigaction</name>
      <anchorfile>structsigaction.html</anchorfile>
      <anchor>ae01f5914e1e5f0529d799f8e66de94b5</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>sigevent</name>
    <filename>structsigevent.html</filename>
    <member kind="variable">
      <type>int</type>
      <name>sigev_notify</name>
      <anchorfile>structsigevent.html</anchorfile>
      <anchor>aae9a19d879c38e0c4e8a9bf738c5081e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>sigev_signo</name>
      <anchorfile>structsigevent.html</anchorfile>
      <anchor>a5c645ec1d12bb46efc3f4097c52b665d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>union sigval</type>
      <name>sigev_value</name>
      <anchorfile>structsigevent.html</anchorfile>
      <anchor>a757af1e34b87e3f66bbc08c514017a2c</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>sigev_notify_function_t</type>
      <name>sigev_notify_function</name>
      <anchorfile>structsigevent.html</anchorfile>
      <anchor>a9424c5f3dd1dd43769262e80856f26ab</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>pthread_attr_t *</type>
      <name>sigev_notify_attributes</name>
      <anchorfile>structsigevent.html</anchorfile>
      <anchor>a5a687d2092b237d76eb08e2d46a5115f</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="union">
    <name>sigval</name>
    <filename>unionsigval.html</filename>
  </compound>
  <compound kind="struct">
    <name>stat</name>
    <filename>structstat.html</filename>
    <member kind="variable">
      <type>dev_t</type>
      <name>st_dev</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>ac5b90090ae323741ae4c9e4f3683a29f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>ino_t</type>
      <name>st_ino</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>a9769ed8f0d4c5a9f329c32bc92479d56</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>mode_t</type>
      <name>st_mode</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>a5cbdd829011af82ba61e83773bbcbc7d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>nlink_t</type>
      <name>st_nlink</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>a0ed9092fa6c77a3251b9b9a4738ef84f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>off_t</type>
      <name>st_size</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>a040e19c8b9766f841fde8786ce9297bf</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>uid_t</type>
      <name>st_uid</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>a4a8708a3d18be60ee7b2f06c4cab0c70</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>gid_t</type>
      <name>st_gid</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>ab864f16f436cec370f0ced585d897698</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>dev_t</type>
      <name>st_rdev</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>aa61e6c1a8a91c69f1d26f6700a0546cb</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct timespec</type>
      <name>st_atim</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>a8447c545451bec2b95f9d67787404934</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct timespec</type>
      <name>st_mtim</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>a78eca07da5a8a88b1c3dd8be5a32821e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct timespec</type>
      <name>st_ctim</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>a8fcf65727b775d92b773776ed1210c8b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>blksize_t</type>
      <name>st_blksize</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>a38d474e1ae3cf6fbdde89ac3c3e308f1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>blkcnt_t</type>
      <name>st_blocks</name>
      <anchorfile>structstat.html</anchorfile>
      <anchor>a42dd716b2f9234f961d949fc9500eefb</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>timespec</name>
    <filename>structtimespec.html</filename>
    <member kind="variable">
      <type>time_t</type>
      <name>tv_sec</name>
      <anchorfile>structtimespec.html</anchorfile>
      <anchor>afc3302668d7cb5952f590da69fdd4955</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>long</type>
      <name>tv_nsec</name>
      <anchorfile>structtimespec.html</anchorfile>
      <anchor>ae3c7510dafa8cbcaede866ed13c99683</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>tm</name>
    <filename>structtm.html</filename>
    <member kind="variable">
      <type>int</type>
      <name>tm_sec</name>
      <anchorfile>structtm.html</anchorfile>
      <anchor>a4d098a9a5c03a00b2ee61e10851de81e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>tm_min</name>
      <anchorfile>structtm.html</anchorfile>
      <anchor>af414eb7c86cc3099595211eee4d4211b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>tm_hour</name>
      <anchorfile>structtm.html</anchorfile>
      <anchor>a3e7ca4e37f1abcaf56b8a916c38eb9fe</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>tm_mday</name>
      <anchorfile>structtm.html</anchorfile>
      <anchor>ab8d8904bad43b0c8b96e61941c5b5310</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>tm_mon</name>
      <anchorfile>structtm.html</anchorfile>
      <anchor>a112ac36fa2f593777138a417cf031e17</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>tm_year</name>
      <anchorfile>structtm.html</anchorfile>
      <anchor>a33adf78fd6476b2120ce3b9c4a852053</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>tm_wday</name>
      <anchorfile>structtm.html</anchorfile>
      <anchor>afe81a8c46f1c693c43f259b288859f4f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>tm_yday</name>
      <anchorfile>structtm.html</anchorfile>
      <anchor>a93a0ba77cc23796df84405dcbcc57eb1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>int</type>
      <name>tm_isdst</name>
      <anchorfile>structtm.html</anchorfile>
      <anchor>a5645ca0580c8ab2c24f6c2965d9c9f9c</anchor>
      <arglist></arglist>
    </member>
  </compound>
</tagfile>
