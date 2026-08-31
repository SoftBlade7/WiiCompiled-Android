#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015BC80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015BC80;

loc_8015BC80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    // inline leaf 0x80124844 (20 guest instruction(s))
}

loc_inl0_0x80124844:
{
}

loc_inl0_0x80124848:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl0_0x8012486C;
    }
}

loc_inl0_0x80124850:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl0_0x80124858:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8012486C;
    }
}

loc_inl0_0x8012485C:
{
    r4 = (r4 * 12);
    r6_addr_1 = (r6 + r4);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    r0 = (r0 & -16777216);
}

loc_inl0_0x80124868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80124874;
    }
}

loc_inl0_0x8012486C:
{
    r3 = 0;
    goto loc_inl0_cont_80124844;
}

loc_inl0_0x80124874:
{
    MemoryInline::FlatWriteRam32(r5, r3);
    r4 = (r6 + r4);
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r5 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r5 + 8), r0);
}

loc_inl0_cont_80124844:
{
    // end of inlined leaf 0x80124844
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015BCA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BCB4;
    }
}

loc_8015BCAC:
{
    r3 = -5009;
    goto loc_8015BCD4;
}

loc_8015BCB4:
{
    MemoryInline::FlatWrite32(r31, r30);
    r0 = 0;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r31 + 4), r4);
    r4 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r31 + 8), r4);
    MemoryInline::FlatWrite32((r31 + 12), r0);
}

loc_8015BCD4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015BC80 func_8015BC80 preserves=true fpr_mask=0x00000000
