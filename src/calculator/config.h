#ifndef SANDBOX_DEV_CONFIG_H
#define SANDBOX_DEV_CONFIG_H

namespace calculator {
    class config {
    public:
        config();

        static config& instance();

        int get_value() const;
        void set_value(int value);

    private:
        int m_value;
    };
}  // namespace calculator

#endif  // SANDBOX_DEV_CONFIG_H
