#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066C8D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066C8D8;

loc_8066C8D8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066C8FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C9E8;
    }
}

loc_8066C900:
{
    r5 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 88));
    r5 = MemoryInline::FlatRead32((r5 + -29952));
}

loc_8066C910:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_8066C93C;
    }
}

loc_8066C914:
{
    r0 = MemoryInline::FlatRead8((r3 + 85));
}

loc_8066C91C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8066C92C;
    }
}

loc_8066C920:
{
}

loc_8066C924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8066C934;
    }
}

loc_8066C928:
{
    goto loc_8066C93C;
}

loc_8066C92C:
{
    r0 = 1;
    goto loc_8066C940;
}

loc_8066C934:
{
    r0 = 2;
    goto loc_8066C940;
}

loc_8066C93C:
{
    r0 = 3;
}

loc_8066C940:
{
    MemoryInline::FlatWrite32((r4 + 12), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8066C948:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066C98C;
    }
}

loc_8066C954:
{
    r3 = 0x809C0000u;
    r4 = r0;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80548B8Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 + 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    MemoryInline::FlatWrite8((r31 + 24), static_cast<uint8_t>(r0));
    goto loc_8066C994;
}

loc_8066C98C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r4 + 24), static_cast<uint8_t>(r0));
}

loc_8066C994:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8066C99C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C9B4;
    }
}

loc_8066C9A0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r3 = 1;
    MemoryInline::FlatWrite32((r31 + 20), r0);
    goto loc_8066C9EC;
}

loc_8066C9B4:
{
    r4 = MemoryInline::FlatRead32((r30 + 30088));
    r3 = r31;
    // inline leaf 0x80510A90 (10 guest instruction(s))
}

loc_inl0_0x80510A90:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (r5 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(17236));
}

loc_inl0_0x80510AA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80510AA8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80510A90;
}

loc_inl0_return:
{
}

loc_inl0_cont_80510A90:
{
    // end of inlined leaf 0x80510A90
    r3 = (r30 + 656);
    MemoryInline::FlatWrite32((r31 + 16), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80017998u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = 63;
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r4);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_8066C9EC;
}

loc_8066C9E8:
{
    r3 = 0;
}

loc_8066C9EC:
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8066C8D8 func_8066C8D8 preserves=true fpr_mask=0x00000000
