#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067B210(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8067B210;

loc_8067B210:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8067B234:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067B2DC;
    }
}

loc_8067B238:
{
    r0 = MemoryInline::FlatRead32((r3 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8067B240:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067B2DC;
    }
}

loc_8067B244:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8067B254:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067B2DC;
    }
}

loc_8067B258:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8067B26C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067B278;
    }
}

loc_8067B270:
{
    r30 = 0;
    goto loc_8067B2CC;
}

loc_8067B278:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067B2C8;
    }
}

loc_8067B284:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8067B298u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8067B2B0;
}

loc_8067B29C:
{
}

loc_8067B2A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_8067B2AC;
    }
}

loc_8067B2A4:
{
    r0 = 1;
    goto loc_8067B2BC;
}

loc_8067B2AC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8067B2B0:
{
}

loc_8067B2B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8067B29C;
    }
}

loc_8067B2B8:
{
    r0 = 0;
}

loc_8067B2BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8067B2C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067B2C8;
    }
}

loc_8067B2C4:
{
    goto loc_8067B2CC;
}

loc_8067B2C8:
{
    r30 = 0;
}

loc_8067B2CC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r29 + 84), r0);
    r3 = r30;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
}

loc_8067B2DC:
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8067B210 func_8067B210 preserves=true fpr_mask=0x00000000
