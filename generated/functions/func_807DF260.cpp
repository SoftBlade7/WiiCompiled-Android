#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807DF260(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807DF260;

loc_807DF260:
{
    r7 = 0x808A0000u;
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 30344));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    SetCRFloatResident(cr, 0, f0.d, f6.d);
}

loc_807DF278:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807DF2A0;
    }
}

loc_807DF284:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat64((r7 + 30528));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_807DF2E8;
}

loc_807DF2A0:
{
    r7 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r7);
    r0 = (r4 ^ -2147483648);
    r8 = 0x808A0000u;
    f4.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f5.d = MemoryInline::FlatReadFloat64((r8 + 30528));
    MemoryInline::FlatWriteRam32((r1 + 28), r7);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
}

loc_807DF2E8:
{
    r7 = 0x808A0000u;
    f1.d = f4.d;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 30344));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_807DF2F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807DF308;
    }
}

loc_807DF2FC:
{
    r7 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 30460));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
}

loc_807DF308:
{
    r7 = (r1 + 12);
    // psq_store w=1 quant=5 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 5u>(ctx, r7, PPC_PsFromScalarInline(f1.d));
    r7 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 30344));
    f1.d = f4.d;
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_807DF324:
{
    MemoryInline::FlatWrite32(r5, r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807DF338;
    }
}

loc_807DF32C:
{
    r7 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 30460));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
}

loc_807DF338:
{
    r7 = (r1 + 8);
    // psq_store w=1 quant=5 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 5u>(ctx, r7, PPC_PsFromScalarInline(f1.d));
    r7 = MemoryInline::FlatRead16((r1 + 8));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite32(r6, r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_807DF350:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807DF368;
    }
}

loc_807DF354:
{
    MemoryInline::FlatWrite32(r6, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 30344));
    MemoryInline::FlatWrite32(r5, r3);
    goto loc_807DF3BC;
}

loc_807DF368:
{
    r3 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r4));
}

loc_807DF370:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807DF388;
    }
}

loc_807DF374:
{
    MemoryInline::FlatWrite32(r6, r4);
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 30460));
    MemoryInline::FlatWrite32(r5, r4);
    goto loc_807DF3BC;
}

loc_807DF388:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 ^ -2147483648);
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f2.d = MemoryInline::FlatReadFloat64((r3 + 30528));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_807DF3BC:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x0000019B gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807DF260 func_807DF260 preserves=true fpr_mask=0x00000000
