#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057E804(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8057E804;

loc_8057E804:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r5 & 262144);
}

loc_8057E828:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057E8F0;
    }
}

loc_8057E82C:
{
    r0 = (r5 & 524288);
}

loc_8057E830:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057E8F0;
    }
}

loc_8057E834:
{
    r0 = (r5 & 8);
}

loc_8057E838:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057E8F0;
    }
}

loc_8057E83C:
{
    r6 = (r5 & 8192);
}

loc_8057E840:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8057E84C;
    }
}

loc_8057E844:
{
    r0 = (r5 & 16777216);
}

loc_8057E848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057E8F0;
    }
}

loc_8057E84C:
{
    r0 = (r5 & 4);
}

loc_8057E850:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057E8E0;
    }
}

loc_8057E854:
{
    r0 = (r5 & 134217728);
}

loc_8057E858:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057E8F0;
    }
}

loc_8057E85C:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
}

loc_8057E864:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057E8F0;
    }
}

loc_8057E868:
{
    r0 = (r5 & 16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057E86C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057E8A4;
    }
}

loc_8057E870:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 204), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r12 = MemoryInline::FlatRead32((r31 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x8057E8A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8057E8F0;
}

loc_8057E8A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8057E8A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057E8F0;
    }
}

loc_8057E8AC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 204), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r12 = MemoryInline::FlatRead32((r31 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x8057E8DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8057E8F0;
}

loc_8057E8E0:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -134217729);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_8057E8F0:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 524288);
}

loc_8057E900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057E954;
    }
}

loc_8057E904:
{
    r0 = MemoryInline::FlatRead32((r31 + 204));
}

loc_8057E90C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057E934;
    }
}

loc_8057E910:
{
    r0 = (r3 & 8192);
}

loc_8057E914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057E924;
    }
}

loc_8057E918:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 204), r0);
    goto loc_8057E934;
}

loc_8057E924:
{
    r0 = (r3 & 16777216);
}

loc_8057E928:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057E934;
    }
}

loc_8057E92C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 204), r0);
}

loc_8057E934:
{
    r3 = 0x808B0000u;
    r4 = MemoryInline::FlatRead32((r31 + 208));
    r0 = MemoryInline::FlatRead16((r3 + 22932));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8057E944:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8057E964;
    }
}

loc_8057E948:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 208), r0);
    goto loc_8057E964;
}

loc_8057E954:
{
    r0 = (r3 & 134217728);
}

loc_8057E958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057E964;
    }
}

loc_8057E95C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 208), r0);
}

loc_8057E964:
{
    r4 = MemoryInline::FlatRead32(r31);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r4 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057E978:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057E988;
    }
}

loc_8057E97C:
{
    r0 = (r4 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057E980:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057E988;
    }
}

loc_8057E984:
{
    r3 = 0;
}

loc_8057E988:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8057E804 func_8057E804 preserves=true fpr_mask=0x00000000
