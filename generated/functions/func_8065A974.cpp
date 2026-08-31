#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065A974(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065A974;

loc_8065A974:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8065A980:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8065A9AC;
    }
}

loc_8065A990:
{
}

loc_8065A994:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8065A9B8;
    }
}

loc_8065A998:
{
}

loc_8065A99C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_8065A9C4;
    }
}

loc_8065A9A0:
{
}

loc_8065A9A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_8065A9D0;
    }
}

loc_8065A9A8:
{
    goto loc_8065A9D8;
}

loc_8065A9AC:
{
    r0 = 9;
    r30 = -1;
    goto loc_8065A9D8;
}

loc_8065A9B8:
{
    r0 = 9;
    r30 = -2;
    goto loc_8065A9D8;
}

loc_8065A9C4:
{
    r0 = 6;
    r30 = -10;
    goto loc_8065A9D8;
}

loc_8065A9D0:
{
    r0 = 6;
    r30 = -20;
}

loc_8065A9D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8065A9DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065A9EC;
    }
}

loc_8065A9E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_8065A9E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AA34;
    }
}

loc_8065A9E8:
{
    goto loc_8065AA70;
}

loc_8065A9EC:
{
    r3 = 0x809C0000u;
    r31 = MemoryInline::FlatRead32((r3 + 8408));
    r3 = (r31 + 8);
    ctx->lr = 0x8065A9FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7EE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8065AA04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AA28;
    }
}

loc_8065AA08:
{
    r3 = (r30 + -65536);
    r4 = 1;
    r0 = (r3 + -5464);
    MemoryInline::FlatWrite32((r31 + 44), r4);
    r3 = (0 - r0);
    MemoryInline::FlatWrite32((r31 + 48), r3);
    r0 = 7;
    MemoryInline::FlatWrite32((r31 + 40), r0);
}

loc_8065AA28:
{
    r3 = (r31 + 8);
    ctx->lr = 0x8065AA30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8065AA70;
}

loc_8065AA34:
{
    r3 = 0x809C0000u;
    r31 = MemoryInline::FlatRead32((r3 + 8408));
    r3 = (r31 + 8);
    ctx->lr = 0x8065AA44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7EE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8065AA4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AA68;
    }
}

loc_8065AA50:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 44), r0);
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 48), r3);
    r0 = 7;
    MemoryInline::FlatWrite32((r31 + 40), r0);
}

loc_8065AA68:
{
    r3 = (r31 + 8);
    ctx->lr = 0x8065AA70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8065AA70:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8065A974 func_8065A974 preserves=true fpr_mask=0x00000000
