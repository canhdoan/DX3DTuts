#ifndef __INPUT_CLASS_H__
#define __INPUT_CLASS_H__

class InputClass {
public:
	InputClass();
	InputClass(const InputClass&);
	~InputClass();

	void Initialize();

	void KeyDown(unsigned int);
	void KeyUp(unsigned int);

	bool IsKeyDown(unsigned int);

private:
	bool m_keys[256];
};


#endif // __INPUT_CLASS_H__
