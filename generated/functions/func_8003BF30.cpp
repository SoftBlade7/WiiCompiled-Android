#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003BF30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8003BF30;

loc_8003BF30:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x802B0000u;
    r31 = (r31 + 30128);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r0 = MemoryInline::FlatRead8((r13 + -27360));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BF6C;
    }
}

loc_8003BF5C:
{
    r3 = (r31 + 0);
    ctx->lr = 0x8003BF64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8003E2B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27360), static_cast<uint8_t>(r0));
}

loc_8003BF6C:
{
    r0 = MemoryInline::FlatRead8((r13 + -27359));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BF88;
    }
}

loc_8003BF78:
{
    r3 = (r31 + 208);
    ctx->lr = 0x8003BF80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80040690u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27359), static_cast<uint8_t>(r0));
}

loc_8003BF88:
{
    r0 = MemoryInline::FlatRead8((r13 + -27358));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BFA4;
    }
}

loc_8003BF94:
{
    r3 = (r31 + 416);
    ctx->lr = 0x8003BF9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80042BB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27358), static_cast<uint8_t>(r0));
}

loc_8003BFA4:
{
    r0 = MemoryInline::FlatRead8((r13 + -27357));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BFC0;
    }
}

loc_8003BFB0:
{
    r3 = (r31 + 624);
    ctx->lr = 0x8003BFB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800436B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27357), static_cast<uint8_t>(r0));
}

loc_8003BFC0:
{
    r0 = MemoryInline::FlatRead8((r13 + -27356));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BFDC;
    }
}

loc_8003BFCC:
{
    r3 = (r31 + 832);
    ctx->lr = 0x8003BFD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80043DB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27356), static_cast<uint8_t>(r0));
}

loc_8003BFDC:
{
    r0 = MemoryInline::FlatRead8((r13 + -27355));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003BFF8;
    }
}

loc_8003BFE8:
{
    r3 = (r31 + 1040);
    ctx->lr = 0x8003BFF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800442D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27355), static_cast<uint8_t>(r0));
}

loc_8003BFF8:
{
    r0 = MemoryInline::FlatRead8((r13 + -27354));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003C014;
    }
}

loc_8003C004:
{
    r3 = (r31 + 1248);
    ctx->lr = 0x8003C00Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80047320u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27354), static_cast<uint8_t>(r0));
}

loc_8003C014:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
}

loc_8003C018:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003C050;
    }
}

loc_8003C01C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
}

loc_8003C020:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003C058;
    }
}

loc_8003C024:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
}

loc_8003C028:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003C060;
    }
}

loc_8003C02C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_8003C030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003C068;
    }
}

loc_8003C034:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8003C038:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003C070;
    }
}

loc_8003C03C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(5));
}

loc_8003C040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003C078;
    }
}

loc_8003C044:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(6));
}

loc_8003C048:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003C080;
    }
}

loc_8003C04C:
{
    goto loc_8003C088;
}

loc_8003C050:
{
    r3 = (r31 + 0);
    goto loc_8003C08C;
}

loc_8003C058:
{
    r3 = (r31 + 208);
    goto loc_8003C08C;
}

loc_8003C060:
{
    r3 = (r31 + 416);
    goto loc_8003C08C;
}

loc_8003C068:
{
    r3 = (r31 + 624);
    goto loc_8003C08C;
}

loc_8003C070:
{
    r3 = (r31 + 832);
    goto loc_8003C08C;
}

loc_8003C078:
{
    r3 = (r31 + 1040);
    goto loc_8003C08C;
}

loc_8003C080:
{
    r3 = (r31 + 1248);
    goto loc_8003C08C;
}

loc_8003C088:
{
    r3 = (r31 + 0);
}

loc_8003C08C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0003FFE gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8003BF30 func_8003BF30 preserves=true fpr_mask=0x00000000
