#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808187B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r6_subfic_ra_4 = 0;
    uint32_t r7_subfic_ra_0 = 0;
    uint32_t r7_subfic_ra_1 = 0;
    uint32_t r7_subfic_ra_2 = 0;
    uint32_t r7_subfic_ra_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808187B4;

loc_808187B4:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r8 = 1127219200;
    r6 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    r7 = MemoryInline::FlatRead32((r6 + -10448));
    r6 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    r0 = MemoryInline::FlatRead32((r7 + 32));
    f1.d = MemoryInline::FlatReadFloat64((r6 + -19248));
    r0 = (r0 - r5);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::FlatRead32((r3 + 304));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 40), r8);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 280));
    f1.d = PPC_Fctiwz(f2.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    r5 = fctiwzword0;
}

loc_80818810:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_8081881C;
    }
}

loc_80818814:
{
    r7 = 0;
    goto loc_80818878;
}

loc_8081881C:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    r5 = MemoryInline::FlatRead32((r3 + 308));
    r6 = MemoryInline::FlatRead32((r1 + 52));
}

loc_8081882C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_80818838;
    }
}

loc_80818830:
{
    r7 = 1;
    goto loc_80818878;
}

loc_80818838:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    r8 = MemoryInline::FlatRead32((r3 + 312));
    r5 = MemoryInline::FlatRead32((r1 + 52));
}

loc_80818848:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r8))) {
        goto loc_80818854;
    }
}

loc_8081884C:
{
    r7 = 2;
    goto loc_80818878;
}

loc_80818854:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    r5 = 0x808D0000u;
    r5 = MemoryInline::FlatRead32((r5 + 26376));
    r7 = 4;
    r6 = MemoryInline::FlatRead32((r1 + 52));
    r5 = (r8 + r5);
}

loc_80818870:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_80818878;
    }
}

loc_80818874:
{
    r7 = 3;
}

loc_80818878:
{
}

loc_8081887C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(1))) {
        goto loc_80818894;
    }
}

loc_80818880:
{
}

loc_80818884:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(3))) {
        goto loc_80818A08;
    }
}

loc_80818888:
{
}

loc_8081888C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(4))) {
        goto loc_80818B58;
    }
}

loc_80818890:
{
    goto loc_80818B84;
}

loc_80818894:
{
    f1.d = PPC_Fctiwz(f2.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword1;
}

loc_808188A4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_808188CC;
    }
}

loc_808188A8:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 52));
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    goto loc_808189B0;
}

loc_808188CC:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    r6 = MemoryInline::FlatRead32((r3 + 308));
    r5 = MemoryInline::FlatRead32((r1 + 52));
}

loc_808188DC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r6))) {
        goto loc_80818908;
    }
}

loc_808188E0:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 52));
    r5 = (r5 - r0);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    goto loc_808189B0;
}

loc_80818908:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    r7 = MemoryInline::FlatRead32((r3 + 312));
    r5 = MemoryInline::FlatRead32((r1 + 52));
}

loc_80818918:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r7))) {
        goto loc_80818944;
    }
}

loc_8081891C:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 52));
    r5 = (r5 - r6);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    goto loc_808189B0;
}

loc_80818944:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    r5 = 0x808D0000u;
    r8 = MemoryInline::FlatRead32((r5 + 26376));
    r6 = MemoryInline::FlatRead32((r1 + 52));
    r5 = (r7 + r8);
}

loc_8081895C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_80818988;
    }
}

loc_80818960:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f1.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 60));
    r5 = (r5 - r7);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    goto loc_808189B0;
}

loc_80818988:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f1.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 68));
    r5 = (r5 - r7);
    r5 = (r5 - r8);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
}

loc_808189B0:
{
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword2 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f1.d);
    r6 = fctiwzword2;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & -536870912);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    r5 = (r5 - r6);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_2 & -1);
    r5 = (r5 + r6);
    r7 = (r5 + 1);
}

loc_808189D8:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(4))) {
        goto loc_808189E0;
    }
}

loc_808189DC:
{
    r7_subfic_ra_1 = r7;
    r7 = (4 - r7_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r7_subfic_ra_1) ? 1u : 0u) << 29);
}

loc_808189E0:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    r5 = 0x808B0000u;
    r6 = (r6 + r7);
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    goto loc_80818B84;
}

loc_80818A08:
{
    f1.d = PPC_Fctiwz(f2.d);
    fctiwzword3 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword3;
}

loc_80818A18:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80818A40;
    }
}

loc_80818A1C:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f1.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 68));
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    goto loc_80818B24;
}

loc_80818A40:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f1.d);
    r6 = MemoryInline::FlatRead32((r3 + 308));
    r5 = MemoryInline::FlatRead32((r1 + 68));
}

loc_80818A50:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r6))) {
        goto loc_80818A7C;
    }
}

loc_80818A54:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f1.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 68));
    r5 = (r5 - r0);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    goto loc_80818B24;
}

loc_80818A7C:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f1.d);
    r7 = MemoryInline::FlatRead32((r3 + 312));
    r5 = MemoryInline::FlatRead32((r1 + 68));
}

loc_80818A8C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r7))) {
        goto loc_80818AB8;
    }
}

loc_80818A90:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f1.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 68));
    r5 = (r5 - r6);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    goto loc_80818B24;
}

loc_80818AB8:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f1.d);
    r5 = 0x808D0000u;
    r8 = MemoryInline::FlatRead32((r5 + 26376));
    r6 = MemoryInline::FlatRead32((r1 + 68));
    r5 = (r7 + r8);
}

loc_80818AD0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_80818AFC;
    }
}

loc_80818AD4:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f1.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 60));
    r5 = (r5 - r7);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    goto loc_80818B24;
}

loc_80818AFC:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f1.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 52));
    r5 = (r5 - r7);
    r5 = (r5 - r8);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
}

loc_80818B24:
{
    f1.d = PPC_Fctiwz(f1.d);
    r5 = 0x808B0000u;
    f4.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    fctiwzword4 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 300));
    r5 = fctiwzword4;
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80818B84;
}

loc_80818B58:
{
    r6 = 0x808D0000u;
    r5 = 0x808B0000u;
    r6 = MemoryInline::FlatRead32((r6 + 26376));
    f4.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 300));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_80818B84:
{
}

loc_80818B88:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80818F50;
    }
}

loc_80818B8C:
{
    r5 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 280));
    f3.d = MemoryInline::FlatReadFloat32((r5 + -19240));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f3.d = PPC_Fctiwz(f3.d);
    fctiwzword5 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f3.d);
    r5 = fctiwzword5;
}

loc_80818BAC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80818BB8;
    }
}

loc_80818BB0:
{
    r7 = 0;
    goto loc_80818C14;
}

loc_80818BB8:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f3.d);
    r5 = MemoryInline::FlatRead32((r3 + 308));
    r6 = MemoryInline::FlatRead32((r1 + 68));
}

loc_80818BC8:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_80818BD4;
    }
}

loc_80818BCC:
{
    r7 = 1;
    goto loc_80818C14;
}

loc_80818BD4:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f3.d);
    r8 = MemoryInline::FlatRead32((r3 + 312));
    r5 = MemoryInline::FlatRead32((r1 + 68));
}

loc_80818BE4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r8))) {
        goto loc_80818BF0;
    }
}

loc_80818BE8:
{
    r7 = 2;
    goto loc_80818C14;
}

loc_80818BF0:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f3.d);
    r5 = 0x808D0000u;
    r5 = MemoryInline::FlatRead32((r5 + 26376));
    r7 = 4;
    r6 = MemoryInline::FlatRead32((r1 + 68));
    r5 = (r8 + r5);
}

loc_80818C0C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_80818C14;
    }
}

loc_80818C10:
{
    r7 = 3;
}

loc_80818C14:
{
}

loc_80818C18:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(1))) {
        goto loc_80818C30;
    }
}

loc_80818C1C:
{
}

loc_80818C20:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(3))) {
        goto loc_80818DB0;
    }
}

loc_80818C24:
{
}

loc_80818C28:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(4))) {
        goto loc_80818F0C;
    }
}

loc_80818C2C:
{
    goto loc_80818F38;
}

loc_80818C30:
{
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat32((r5 + -19240));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword6 = PPC_FprLowWordInline(f2.d);
    r5 = fctiwzword6;
}

loc_80818C4C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80818C74;
    }
}

loc_80818C50:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    goto loc_80818D58;
}

loc_80818C74:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r6 = MemoryInline::FlatRead32((r3 + 308));
    r5 = MemoryInline::FlatRead32((r1 + 68));
}

loc_80818C84:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r6))) {
        goto loc_80818CB0;
    }
}

loc_80818C88:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 68));
    r0 = (r5 - r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    goto loc_80818D58;
}

loc_80818CB0:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r7 = MemoryInline::FlatRead32((r3 + 312));
    r0 = MemoryInline::FlatRead32((r1 + 68));
}

loc_80818CC0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r7))) {
        goto loc_80818CEC;
    }
}

loc_80818CC4:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r0 = (r0 - r6);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    goto loc_80818D58;
}

loc_80818CEC:
{
    r5 = 0x808D0000u;
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r6 = MemoryInline::FlatRead32((r5 + 26376));
    r5 = MemoryInline::FlatRead32((r1 + 68));
    r0 = (r7 + r6);
}

loc_80818D04:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80818D30;
    }
}

loc_80818D08:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f2.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r0 = MemoryInline::FlatRead32((r1 + 60));
    r0 = (r0 - r7);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    goto loc_80818D58;
}

loc_80818D30:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f2.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r0 = (r0 - r7);
    r0 = (r0 - r6);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
}

loc_80818D58:
{
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword7 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r5 = fctiwzword7;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & -536870912);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & 1);
    r0 = (r0 - r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -1);
    r5 = (r0 + r5);
    r6 = (r5 + 1);
}

loc_80818D80:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(4))) {
        goto loc_80818D88;
    }
}

loc_80818D84:
{
    r6_subfic_ra_1 = r6;
    r6 = (4 - r6_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r6_subfic_ra_1) ? 1u : 0u) << 29);
}

loc_80818D88:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = 0x808B0000u;
    r0 = (r0 + r6);
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    goto loc_80818F38;
}

loc_80818DB0:
{
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat32((r5 + -19240));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword8 = PPC_FprLowWordInline(f2.d);
    r5 = fctiwzword8;
}

loc_80818DCC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80818DF4;
    }
}

loc_80818DD0:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    goto loc_80818ED8;
}

loc_80818DF4:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r6 = MemoryInline::FlatRead32((r3 + 308));
    r5 = MemoryInline::FlatRead32((r1 + 68));
}

loc_80818E04:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r6))) {
        goto loc_80818E30;
    }
}

loc_80818E08:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r5 = MemoryInline::FlatRead32((r1 + 68));
    r0 = (r5 - r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    goto loc_80818ED8;
}

loc_80818E30:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r7 = MemoryInline::FlatRead32((r3 + 312));
    r0 = MemoryInline::FlatRead32((r1 + 68));
}

loc_80818E40:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r7))) {
        goto loc_80818E6C;
    }
}

loc_80818E44:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r0 = (r0 - r6);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    goto loc_80818ED8;
}

loc_80818E6C:
{
    r5 = 0x808D0000u;
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    r6 = MemoryInline::FlatRead32((r5 + 26376));
    r5 = MemoryInline::FlatRead32((r1 + 68));
    r0 = (r7 + r6);
}

loc_80818E84:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80818EB0;
    }
}

loc_80818E88:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f2.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r0 = MemoryInline::FlatRead32((r1 + 60));
    r0 = (r0 - r7);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    goto loc_80818ED8;
}

loc_80818EB0:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f2.d);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r0 = (r0 - r7);
    r0 = (r0 - r6);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
}

loc_80818ED8:
{
    f2.d = PPC_Fctiwz(f2.d);
    r5 = 0x808B0000u;
    f4.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    fctiwzword9 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 300));
    r0 = fctiwzword9;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    goto loc_80818F38;
}

loc_80818F0C:
{
    r6 = 0x808D0000u;
    r5 = 0x808B0000u;
    r0 = MemoryInline::FlatRead32((r6 + 26376));
    f4.d = MemoryInline::FlatReadFloat64((r5 + -19232));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 300));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
}

loc_80818F38:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r5 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + -19256));
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f2.d);
}

loc_80818F50:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 284));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 276));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    r0 = MemoryInline::FlatRead8((r3 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80818F6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80818F78;
    }
}

loc_80818F70:
{
    r4 = (r3 + 72);
    goto loc_80818FA8;
}

loc_80818F78:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r31 + 88);
    ctx->lr = 0x80818F8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80818FA8:
{
    r3 = (r31 + 316);
    r5 = (r1 + 20);
    ctx->lr = 0x80818FB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r31 + 316);
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0003FFF gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0xFC000FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808187B4 func_808187B4 preserves=true fpr_mask=0x00000000
