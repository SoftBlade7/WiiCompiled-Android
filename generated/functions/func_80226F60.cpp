#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80226F60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80226F60;

loc_80226F60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r8 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 28));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80226F78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80226FBC;
    }
}

loc_80226F7C:
{
    r7 = MemoryInline::FlatRead8((r3 + 4));
    r4 = (r1 + 12);
    r6 = MemoryInline::FlatRead8((r3 + 5));
    r5 = MemoryInline::FlatRead8((r3 + 6));
    r0 = MemoryInline::FlatRead8((r3 + 7));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 8));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r5));
    f2.d = MemoryInline::FlatReadFloat32((r8 + 12));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    f3.d = MemoryInline::FlatReadFloat32((r8 + 16));
    f4.d = MemoryInline::FlatReadFloat32((r8 + 20));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x801722CCu>(ctx);
    goto loc_80226FF8;
}

loc_80226FBC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25248));
    r4 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -25244));
    r3 = 0;
    r7 = MemoryInline::FlatRead8((r2 + -25692));
    f3.d = f1.d;
    r6 = MemoryInline::FlatRead8((r2 + -25691));
    f4.d = f2.d;
    r5 = MemoryInline::FlatRead8((r2 + -25690));
    r0 = MemoryInline::FlatRead8((r2 + -25689));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x801722CCu>(ctx);
}

loc_80226FF8:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80172658u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001F0E gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80226F60 func_80226F60 preserves=true fpr_mask=0x00000000
