# To support layered ipk generation
APPLICATION_LAYER_ARCH = "${MACHINE}-application"
APPLICATION_LAYER_VERSION = "4.0.3"
APPLICATION_IPK_SERVER_PATH = "https://partners.artifactory.comcast.com/artifactory/opkg/raspberrypi4-64-rdke/ipks/raspberrypi4-64-rdke-vendor/apparmor_ven"

PACKAGE_EXTRA_ARCHS:append = " ${APPLICATION_LAYER_ARCH}"

# To set the remote feeds
IPK_FEED_URIS += " \
                ${APPLICATION_LAYER_ARCH}##${APPLICATION_IPK_SERVER_PATH} "
