#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000C818(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000C818;

loc_8000C818:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead8((r13 + -27608));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000C838:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C858;
    }
}

loc_8000C83C:
{
    r3 = 0x802A0000u;
    r4 = 0;
    r3 = (r3 + 16760);
    r5 = 52;
    ctx->lr = 0x8000C850u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27608), static_cast<uint8_t>(r0));
}

loc_8000C858:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8000C85C:
{
    r30 = 0x802A0000u;
    r30 = (r30 + 16760);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C930;
    }
}

loc_8000C868:
{
    r3 = MemoryInline::FlatRead32((r31 + -4));
    r0 = (r3 & 1);
}

loc_8000C870:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000C87C;
    }
}

loc_8000C874:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_8000C888;
}

loc_8000C87C:
{
    r0 = MemoryInline::FlatRead32((r31 + -8));
    r3 = (r0 & -8);
    r5 = (r3 + -8);
}

loc_8000C888:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(68));
}

loc_8000C88C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8000C8A0;
    }
}

loc_8000C890:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x8000C89Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000C62Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8000C930;
}

loc_8000C8A0:
{
    r0 = MemoryInline::FlatRead32((r31 + -4));
    r4 = (r31 + -8);
    r31 = (r0 & -2);
    r3 = r31;
    ctx->lr = 0x8000C8B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000C434u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r5 = 0;
    r0 = (r3 & 2);
}

loc_8000C8C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000C8E0;
    }
}

loc_8000C8C4:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r4 = (r3 & -8);
    r3 = (r0 & -8);
    r0 = (r3 + -24);
}

loc_8000C8D8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8000C8E0;
    }
}

loc_8000C8DC:
{
    r5 = 1;
}

loc_8000C8E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000C8E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C930;
    }
}

loc_8000C8E8:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
}

loc_8000C8F0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r31))) {
        goto loc_8000C8F8;
    }
}

loc_8000C8F4:
{
    r4 = 0;
}

loc_8000C8F8:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_8000C900:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_8000C908;
    }
}

loc_8000C904:
{
    MemoryInline::FlatWriteRam32(r30, r4);
}

loc_8000C908:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8000C90C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C91C;
    }
}

loc_8000C910:
{
    r3 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_8000C91C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r3 = r31;
    MemoryInline::FlatWrite32(r31, r0);
    ctx->lr = 0x8000C930u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020D20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8000C930:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8000C818 func_8000C818 preserves=true fpr_mask=0x00000000
