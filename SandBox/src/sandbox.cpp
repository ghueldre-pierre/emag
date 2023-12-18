#include <emag.h>

class SandBox : public emag::application {
public:
	SandBox() {

	}
	~SandBox() {

	}
};

emag::application* emag::createApplication() {
	return new SandBox();
}