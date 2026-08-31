#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F7224(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807F7224;

loc_807F7224:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 2;
    f3.d = MemoryInline::FlatReadFloat64((r5 + -23112));
    r6 = r3;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -23136));
    r4 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    ctr = r0;
}

loc_807F7260:
{
    r0 = MemoryInline::FlatRead32((r6 + 372));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0 = (r0 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 376));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807F7284:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F7290;
    }
}

loc_807F7288:
{
    r3 = 1;
    goto loc_807F73A4;
}

loc_807F7290:
{
    r0 = MemoryInline::FlatRead32((r6 + 392));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0 = (r0 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 396));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807F72B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F72C0;
    }
}

loc_807F72B8:
{
    r3 = 1;
    goto loc_807F73A4;
}

loc_807F72C0:
{
    r0 = MemoryInline::FlatRead32((r6 + 412));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0 = (r0 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 416));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807F72E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F72F0;
    }
}

loc_807F72E8:
{
    r3 = 1;
    goto loc_807F73A4;
}

loc_807F72F0:
{
    r6 = (r6 + 60);
    r5 = (r5 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807F7260;
    }
}

loc_807F72FC:
{
    r5 = MemoryInline::FlatRead32((r3 + 2932));
    r0 = 1127219200;
    r6 = 0x808B0000u;
    r4 = 0x808B0000u;
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f3.d = MemoryInline::FlatReadFloat64((r6 + -23112));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 2928));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -23136));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807F7334:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F7340;
    }
}

loc_807F7338:
{
    r3 = 1;
    goto loc_807F73A4;
}

loc_807F7340:
{
    r30 = r3;
    r29 = 0;
}

loc_807F7348:
{
    r3 = MemoryInline::FlatRead32((r30 + 2936));
}

loc_807F7350:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807F7390;
    }
}

loc_807F7354:
{
    r0 = MemoryInline::FlatRead8((r3 + 408));
    r31 = 1;
}

loc_807F7360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807F7380;
    }
}

loc_807F7364:
{
    r3 = (r3 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_807F7378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_807F7380;
    }
}

loc_807F737C:
{
    r31 = 0;
}

loc_807F7380:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807F7384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F7390;
    }
}

loc_807F7388:
{
    r3 = 1;
    goto loc_807F73A4;
}

loc_807F7390:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(6));
}

loc_807F739C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F7348;
    }
}

loc_807F73A0:
{
    r3 = 0;
}

loc_807F73A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807F7224 func_807F7224 preserves=true fpr_mask=0x00000000
