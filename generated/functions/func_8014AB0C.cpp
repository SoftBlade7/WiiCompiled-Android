#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014AB0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014AB0C;

loc_8014AB0C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r4 = r30;
    r3 = (r2 + -26864);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014AB3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014AB78;
    }
}

loc_8014AB40:
{
    r3 = r30;
    ctx->lr = 0x8014AB48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014E498u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014AB4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014AB70;
    }
}

loc_8014AB50:
{
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014AB58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014AB70;
    }
}

loc_8014AB5C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8014AB64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014AB70;
    }
}

loc_8014AB68:
{
    MemoryInline::FlatWrite16((r3 + 88), static_cast<uint16_t>(r31));
    goto loc_8014ABF0;
}

loc_8014AB70:
{
    r3 = 0;
    goto loc_8014ABF4;
}

loc_8014AB78:
{
    r3 = 0x80340000u;
    r3 = (r3 + -27840);
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_8014AB88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014AB9C;
    }
}

loc_8014AB8C:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8014AB94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8014AB9C;
    }
}

loc_8014AB98:
{
    MemoryInline::FlatWriteRam16((r3 + 96), static_cast<uint16_t>(r31));
}

loc_8014AB9C:
{
    r3 = (r3 + 100);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8014ABA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014ABB8;
    }
}

loc_8014ABA8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8014ABB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8014ABB8;
    }
}

loc_8014ABB4:
{
    MemoryInline::FlatWriteRam16((r3 + 88), static_cast<uint16_t>(r31));
}

loc_8014ABB8:
{
    r0 = MemoryInline::FlatRead8((r3 + 92));
}

loc_8014ABC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014ABD4;
    }
}

loc_8014ABC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
}

loc_8014ABCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8014ABD4;
    }
}

loc_8014ABD0:
{
    MemoryInline::FlatWriteRam16((r3 + 180), static_cast<uint16_t>(r31));
}

loc_8014ABD4:
{
    r0 = MemoryInline::FlatRead8((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014ABDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014ABF0;
    }
}

loc_8014ABE0:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8014ABE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014ABF0;
    }
}

loc_8014ABEC:
{
    MemoryInline::FlatWriteRam16((r3 + 272), static_cast<uint16_t>(r31));
}

loc_8014ABF0:
{
    r3 = 1;
}

loc_8014ABF4:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FF gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8014AB0C func_8014AB0C preserves=true fpr_mask=0x00000000
