#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8064F7EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8064F7EC;

loc_8064F7EC:
{
    r3 = (r26 & 255);
}

loc_8064F7F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r28))) {
        goto loc_8064F98C;
    }
}

loc_8064F7F8:
{
    r5 = MemoryInline::FlatRead32((r30 + 7736));
    r0 = MemoryInline::FlatRead32((r5 + 152));
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead8((r3 + 728));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8064F98C;
    }
}

loc_8064F810:
{
    r3 = MemoryInline::FlatRead32(r5);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2890 (14 guest instruction(s))
}

loc_inl0_0x805D2890:
{
}

loc_inl0_0x805D2894:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl0_0x805D28C0;
    }
}

loc_inl0_0x805D2898:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x805D28B8;
    }
}

loc_inl0_0x805D28B0:
{
    r3 = (r4 + 8);
    goto loc_inl0_cont_805D2890;
}

loc_inl0_0x805D28B8:
{
    r3 = 0;
    goto loc_inl0_cont_805D2890;
}

loc_inl0_0x805D28C0:
{
    r3 = 0;
}

loc_inl0_cont_805D2890:
{
    // end of inlined leaf 0x805D2890
    r4 = MemoryInline::FlatRead32((r30 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8064F82C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(104))) {
        goto loc_8064F838;
    }
}

loc_8064F830:
{
}

loc_8064F834:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(105))) {
        goto loc_8064F84C;
    }
}

loc_8064F838:
{
}

loc_8064F83C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(108))) {
        goto loc_8064F8B8;
    }
}

loc_8064F840:
{
}

loc_8064F844:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(109))) {
        goto loc_8064F884;
    }
}

loc_8064F848:
{
    goto loc_8064F8B8;
}

loc_8064F84C:
{
    r0 = (r26 & 255);
    r4 = MemoryInline::FlatRead32((r29 + -10456));
    r0 = (r0 * 240);
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 3328));
}

loc_8064F864:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(9999))) {
        goto loc_8064F86C;
    }
}

loc_8064F868:
{
    r4 = 9999;
}

loc_8064F86C:
{
    r0 = (r4 & 65535);
}

loc_8064F874:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_8064F87C;
    }
}

loc_8064F878:
{
    r4 = 1;
}

loc_8064F87C:
{
    MemoryInline::FlatWrite16((r3 + 30), static_cast<uint16_t>(r4));
    goto loc_8064F8B8;
}

loc_8064F884:
{
    r0 = (r26 & 255);
    r4 = MemoryInline::FlatRead32((r29 + -10456));
    r0 = (r0 * 240);
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 3328));
}

loc_8064F89C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(9999))) {
        goto loc_8064F8A4;
    }
}

loc_8064F8A0:
{
    r4 = 9999;
}

loc_8064F8A4:
{
    r0 = (r4 & 65535);
}

loc_8064F8AC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_8064F8B4;
    }
}

loc_8064F8B0:
{
    r4 = 1;
}

loc_8064F8B4:
{
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r4));
}

loc_8064F8B8:
{
    r6 = MemoryInline::FlatRead32((r30 + 7736));
    r4 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead32(r4);
    r0 = (r4 + -104);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
}

loc_8064F8CC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8064F988;
    }
}

loc_8064F8D0:
{
    r4 = (r31 + 348);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    ctr = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8064F988:
{
    r6 = 1;
}

loc_8064F98C:
{
    r26 = (r26 + 1);
}

loc_8064F994:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(12))) {
        goto loc_8064F7EC;
    }
}

loc_8064F998:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8064F99C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064F9B4;
    }
}

loc_8064F9A0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->lr = 0x8064F9B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D21B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8064F9B4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl1_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80621410;
}

loc_inl1_return:
{
}

loc_inl1_cont_80621410:
{
    // end of inlined leaf 0x80621410
    r26 = MemoryInline::FlatRead32((r1 + 24));
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFC00007B gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8064F7EC func_8064F7EC preserves=true fpr_mask=0x00000000
