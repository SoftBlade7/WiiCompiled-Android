#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FD5A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_807FD5A0;

loc_807FD5A0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r6 = 1127219200;
    r5 = MemoryInline::FlatRead32((r3 + 184));
    r0 = MemoryInline::FlatRead32((r3 + 188));
    r3 = 0x808B0000u;
    r5 = (r4 - r5);
    f1.d = MemoryInline::FlatReadFloat64((r3 + -21528));
    r3 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r0 = (r4 - r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = std::fabs(f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    f1.d = std::fabs(f1.d);
    r0 = fctiwzword0;
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword1;
}

loc_807FD60C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_807FD614;
    }
}

loc_807FD610:
{
    r3 = r0;
}

loc_807FD614:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 0x808B0000u;
    r3 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat64((r4 + -21528));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 17356));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807FD638:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807FD648;
    }
}

loc_807FD63C:
{
    r3 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 17352));
    goto loc_807FD664;
}

loc_807FD648:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17352));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
}

loc_807FD664:
{
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x0000000D fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FD5A0 func_807FD5A0 preserves=true fpr_mask=0x00000000
