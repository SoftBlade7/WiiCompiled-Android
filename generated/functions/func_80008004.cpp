#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80008004(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80008004;

loc_80008004:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80260000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -31072);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x80008024u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B28D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27648));
    r0 = MemoryInline::FlatRead32((r3 + 92));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80008030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80008058;
    }
}

loc_80008034:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80008048;
    }
}

loc_80008038:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8000803C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800080C8;
    }
}

loc_80008040:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80008074;
    }
}

loc_80008044:
{
    goto loc_800080C8;
}

loc_80008048:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8000804C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80008090;
    }
}

loc_80008050:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800080C8;
    }
}

loc_80008054:
{
    goto loc_800080AC;
}

loc_80008058:
{
    r4 = 0x80240000u;
    r3 = 0x80240000u;
    r4 = (r4 + 20952);
    MemoryInline::FlatWrite32((r31 + 28), r4);
    r3 = (r3 + 21044);
    MemoryInline::FlatWrite32((r31 + 32), r3);
    goto loc_800080E0;
}

loc_80008074:
{
    r4 = 0x80240000u;
    r3 = 0x80240000u;
    r4 = (r4 + 21240);
    MemoryInline::FlatWrite32((r31 + 28), r4);
    r3 = (r3 + 21332);
    MemoryInline::FlatWrite32((r31 + 32), r3);
    goto loc_800080E0;
}

loc_80008090:
{
    r4 = 0x80240000u;
    r3 = 0x80240000u;
    r4 = (r4 + 21576);
    MemoryInline::FlatWrite32((r31 + 28), r4);
    r3 = (r3 + 21660);
    MemoryInline::FlatWrite32((r31 + 32), r3);
    goto loc_800080E0;
}

loc_800080AC:
{
    r4 = 0x80240000u;
    r3 = 0x80240000u;
    r4 = (r4 + 21888);
    MemoryInline::FlatWrite32((r31 + 28), r4);
    r3 = (r3 + 21964);
    MemoryInline::FlatWrite32((r31 + 32), r3);
    goto loc_800080E0;
}

loc_800080C8:
{
    r4 = 0x80240000u;
    r3 = 0x80240000u;
    r4 = (r4 + 20656);
    MemoryInline::FlatWrite32((r31 + 28), r4);
    r3 = (r3 + 20748);
    MemoryInline::FlatWrite32((r31 + 32), r3);
}

loc_800080E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80008004 func_80008004 preserves=true fpr_mask=0x00000000
