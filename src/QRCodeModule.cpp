#include "../external/libqrencode/qrencode.h"

using std::cout;
using std::string;
using std::vector;

class QRCodeModule {
public:
  QRCodeModule() {}
  ~QRCodeModule() {}
  /* void generateQRCode(const stirng &link) {
    QRcode *qr =
        QRcode_encodeString(link.c_str(), 0, QR_ECLEVEL_Q, QR_MODE_8, 1);
    if (qr) {
      for (size_t i = 0; i < qr->width; ++i) {
        for (size_t j = 0; j < qr->width; ++j) {
          cout << (qr->data[y * qr->width + x] & 1 ? "\033[40m  "
                                                   : "\033[47m  ");
        }
        cout << "\033[40m\n]";
      }
      QRcode_free(qr);
    } else {
      std::cerr << "Failed to generate QR code\n";
    }
  } */
  void generateQRCode(const std::string &link) {
    QRcode *qr =
        QRcode_encodeString(link.c_str(), 0, QR_ECLEVEL_Q, QR_MODE_8, 1);
    if (qr) {
      for (int y = 0; y < qr->width; ++y) {
        for (int x = 0; x < qr->width; ++x) {
          std::cout << (qr->data[y * qr->width + x] & 1 ? "\033[40m  "
                                                        : "\033[47m  ");
        }
        std::cout << "\033[40m\n";
      }
      std::cout << "\033[0m"; // Reset color
      QRcode_free(qr);
    } else {
      std::cerr << "Failed to generate QR code\n";
    }
  }
  void displayLinkAsQRCode(const vector<string> &links) {
    for (const auto &link : links) {
      generateQRCode(link);
      cout << "\n";
    }
  }
};
