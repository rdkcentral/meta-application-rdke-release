# To support layered ipk generation

require conf/include/package_revisions.inc

APPLICATION_LAYER_ARCH = "${MACHINE}-application"
APPLICATION_IPK_PATH = "ipks"
APPLICATION_IPK_SERVER_PATH = "${RDK_ARTIFACTS_BASE_URL}/opkg/${MACHINE}/ipks/${APPLICATION_LAYER_ARCH}/1.0.1"

PACKAGE_EXTRA_ARCHS_append = " ${APPLICATION_LAYER_ARCH}"

# To set the remote feeds
IPK_FEED_URIS += " \
                ${APPLICATION_LAYER_ARCH}##${APPLICATION_IPK_SERVER_PATH} "
