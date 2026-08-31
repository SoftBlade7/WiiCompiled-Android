#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80736EC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80736EC8;

loc_80736EC8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 496));
    r30 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 324));
    r12 = MemoryInline::FlatRead32((r3 + 52));
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x80736F0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r29 + 496));
    r31 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r29 + 512));
    r3 = MemoryInline::FlatRead32(r4);
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    r0 = MemoryInline::FlatRead32((r3 + 700));
}

loc_80736F28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80736F34;
    }
}

loc_80736F2C:
{
}

loc_80736F30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80736F40;
    }
}

loc_80736F34:
{
    MemoryInline::FlatWriteFloat32((r3 + 696), f31.d);
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 700), r0);
}

loc_80736F40:
{
}

loc_80736F44:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80736FB4;
    }
}

loc_80736F48:
{
    r3 = MemoryInline::FlatRead32((r31 + 200));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11232));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r5 = MemoryInline::FlatRead32(r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r4 = MemoryInline::FlatRead32((r29 + 496));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r3 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    r0 = MemoryInline::FlatRead32((r3 + 700));
}

loc_80736F90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80736FB4;
    }
}

loc_80736F94:
{
}

loc_80736F98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80736FB4;
    }
}

loc_80736F9C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 680), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 684), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 688), f0.d);
}

loc_80736FB4:
{
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80736FBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80736FD0;
    }
}

loc_80736FC0:
{
    r3 = r29;
    r4 = (r29 + 100);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80736FE8;
}

loc_80736FD0:
{
    r0 = MemoryInline::FlatRead8((r29 + 524));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80736FD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80736FE8;
    }
}

loc_80736FDC:
{
    r3 = r29;
    r4 = (r29 + 320);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_80736FE8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80736EC8 func_80736EC8 preserves=false fpr_mask=0x80000000
