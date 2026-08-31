#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008E520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008E520;

loc_8008E520:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
}

loc_8008E52C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8008E658;
    }
}

loc_8008E538:
{
    r0 = MemoryInline::FlatRead32((r3 + 124));
}

loc_8008E540:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8008E558;
    }
}

loc_8008E544:
{
}

loc_8008E548:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8008E558;
    }
}

loc_8008E54C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8008E550:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008E774;
    }
}

loc_8008E554:
{
    goto loc_8008E774;
}

loc_8008E558:
{
    r6 = MemoryInline::FlatRead32((r3 + 112));
    r4 = MemoryInline::FlatRead32((r3 + 116));
}

loc_8008E564:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r6))) {
        goto loc_8008E570;
    }
}

loc_8008E568:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 108));
    goto loc_8008E5AC;
}

loc_8008E570:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r6 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -28704));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8008E5AC:
{
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28704));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword0;
}

loc_8008E5D4:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_8008E5DC;
    }
}

loc_8008E5D8:
{
    r5 = 1;
}

loc_8008E5DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r6));
}

loc_8008E5E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008E5EC;
    }
}

loc_8008E5E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 108));
    goto loc_8008E628;
}

loc_8008E5EC:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r6 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -28704));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8008E628:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28708));
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    MemoryInline::FlatWrite32((r3 + 112), r5);
    MemoryInline::FlatWrite32((r3 + 116), r4);
    MemoryInline::FlatWrite32((r3 + 124), r0);
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r4));
    goto loc_8008E774;
}

loc_8008E658:
{
    r4 = MemoryInline::FlatRead32((r3 + 124));
    r0 = (r4 + -1);
}

loc_8008E664:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8008E674;
    }
}

loc_8008E668:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8008E66C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008E774;
    }
}

loc_8008E670:
{
    goto loc_8008E774;
}

loc_8008E674:
{
    r6 = MemoryInline::FlatRead32((r3 + 112));
    r4 = MemoryInline::FlatRead32((r3 + 116));
}

loc_8008E680:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r6))) {
        goto loc_8008E68C;
    }
}

loc_8008E684:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 108));
    goto loc_8008E6C8;
}

loc_8008E68C:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r6 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -28704));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8008E6C8:
{
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28712));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28704));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r7 = fctiwzword1;
}

loc_8008E6F8:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_8008E700;
    }
}

loc_8008E6FC:
{
    r7 = 1;
}

loc_8008E700:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r6));
}

loc_8008E704:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008E710;
    }
}

loc_8008E708:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 108));
    goto loc_8008E74C;
}

loc_8008E710:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r6 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -28704));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8008E74C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28712));
    r5 = 0;
    r4 = 3;
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    MemoryInline::FlatWrite32((r3 + 112), r7);
    MemoryInline::FlatWrite32((r3 + 116), r5);
    MemoryInline::FlatWrite32((r3 + 124), r4);
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r0));
}

loc_8008E774:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008E520 func_8008E520 preserves=true fpr_mask=0x00000000
