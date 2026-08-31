#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EFCC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800EFCC8;

loc_800EFCC8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r31 = (r4 + -1);
    goto loc_800EFDAC;
}

loc_800EFCEC:
{
    r12 = MemoryInline::FlatRead32((r30 + 16));
}

loc_800EFCF4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_800EFD2C;
    }
}

loc_800EFCF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800EFCFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800EFD0C;
    }
}

loc_800EFD00:
{
    r0 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_800EFD08:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800EFD14;
    }
}

loc_800EFD0C:
{
    r3 = 0;
    goto loc_800EFD24;
}

loc_800EFD14:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 * r31);
    r3 = (r3 + r0);
}

loc_800EFD24:
{
    ctr = r12;
    ctx->lr = 0x800EFD2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800EFD2C:
{
    r4 = MemoryInline::FlatRead32(r30);
    r6 = (r4 + -1);
}

loc_800EFD38:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r6))) {
        goto loc_800EFD9C;
    }
}

loc_800EFD3C:
{
}

loc_800EFD40:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(0))) {
        goto loc_800EFD4C;
    }
}

loc_800EFD44:
{
}

loc_800EFD48:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r4))) {
        goto loc_800EFD54;
    }
}

loc_800EFD4C:
{
    r3 = 0;
    goto loc_800EFD64;
}

loc_800EFD54:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 * r31);
    r3 = (r3 + r0);
}

loc_800EFD64:
{
    r5 = (r31 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r31)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800EFD68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800EFD74;
    }
}

loc_800EFD6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r4));
}

loc_800EFD70:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800EFD7C;
    }
}

loc_800EFD74:
{
    r4 = 0;
    goto loc_800EFD8C;
}

loc_800EFD7C:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 * r5);
    r4 = (r4 + r0);
}

loc_800EFD8C:
{
    r5 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r6 - r31);
    r5 = (r5 * r0);
    ctx->lr = 0x800EFD9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000F1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800EFD9C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r31 = (r31 + -1);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_800EFDAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800EFDB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EFCEC;
    }
}

loc_800EFDB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800EFCC8 func_800EFCC8 preserves=true fpr_mask=0x00000000
