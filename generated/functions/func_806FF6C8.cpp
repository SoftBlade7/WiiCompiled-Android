#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FF6C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806FF6C8;

loc_806FF6C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 6;
    r5 = (r5 + 9088);
    ctr = r0;
}

loc_806FF6E8:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_806FF6F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806FF708;
    }
}

loc_806FF6F4:
{
    r0 = MemoryInline::FlatRead8((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806FF6FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FF708;
    }
}

loc_806FF700:
{
    r3 = 0;
    goto loc_806FF854;
}

loc_806FF708:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_806FF710:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806FF728;
    }
}

loc_806FF714:
{
    r0 = MemoryInline::FlatRead8((r5 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806FF71C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FF728;
    }
}

loc_806FF720:
{
    r3 = 0;
    goto loc_806FF854;
}

loc_806FF728:
{
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_806FF730:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806FF748;
    }
}

loc_806FF734:
{
    r0 = MemoryInline::FlatRead8((r5 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806FF73C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FF748;
    }
}

loc_806FF740:
{
    r3 = 0;
    goto loc_806FF854;
}

loc_806FF748:
{
    r0 = MemoryInline::FlatRead32((r5 + 48));
}

loc_806FF750:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806FF768;
    }
}

loc_806FF754:
{
    r0 = MemoryInline::FlatRead8((r5 + 52));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806FF75C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FF768;
    }
}

loc_806FF760:
{
    r3 = 0;
    goto loc_806FF854;
}

loc_806FF768:
{
    r0 = MemoryInline::FlatRead32((r5 + 64));
}

loc_806FF770:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806FF788;
    }
}

loc_806FF774:
{
    r0 = MemoryInline::FlatRead8((r5 + 68));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806FF77C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FF788;
    }
}

loc_806FF780:
{
    r3 = 0;
    goto loc_806FF854;
}

loc_806FF788:
{
    r0 = MemoryInline::FlatRead32((r5 + 80));
}

loc_806FF790:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806FF7A8;
    }
}

loc_806FF794:
{
    r0 = MemoryInline::FlatRead8((r5 + 84));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806FF79C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FF7A8;
    }
}

loc_806FF7A0:
{
    r3 = 0;
    goto loc_806FF854;
}

loc_806FF7A8:
{
    r0 = MemoryInline::FlatRead32((r5 + 96));
}

loc_806FF7B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806FF7C8;
    }
}

loc_806FF7B4:
{
    r0 = MemoryInline::FlatRead8((r5 + 100));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806FF7BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FF7C8;
    }
}

loc_806FF7C0:
{
    r3 = 0;
    goto loc_806FF854;
}

loc_806FF7C8:
{
    r0 = MemoryInline::FlatRead32((r5 + 112));
}

loc_806FF7D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806FF7E8;
    }
}

loc_806FF7D4:
{
    r0 = MemoryInline::FlatRead8((r5 + 116));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806FF7DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FF7E8;
    }
}

loc_806FF7E0:
{
    r3 = 0;
    goto loc_806FF854;
}

loc_806FF7E8:
{
    r5 = (r5 + 128);
    r6 = (r6 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806FF6E8;
    }
}

loc_806FF7F4:
{
    r6 = 0x809C0000u;
    r0 = 48;
    r6 = (r6 + 9088);
    r7 = 0;
    ctr = r0;
}

loc_806FF808:
{
    r5 = MemoryInline::FlatRead32(r6);
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_806FF814:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FF844;
    }
}

loc_806FF818:
{
    r6 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r6 = (r6 + 9088);
    r6_addr_1 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_1, r3);
    r6 = r6_addr_1;
    r5 = 0x809C0000u;
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r4));
    r3 = (r5 + 9856);
    r4 = r6;
    // inline leaf 0x800AEF80 (28 guest instruction(s))
}

loc_inl0_0x800AEF80:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x800AEF88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x800AEFB8;
    }
}

loc_inl0_0x800AEF8C:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = (r4 + r5);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32(r3, r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_800AEF80;
}

loc_inl0_0x800AEFB8:
{
    r6 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6_addr_2 = (r6 + r4);
    MemoryInline::FlatWrite32(r6_addr_2, r5);
    r6 = r6_addr_2;
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl0_cont_800AEF80:
{
    // end of inlined leaf 0x800AEF80
    r3 = 1;
    goto loc_806FF854;
}

loc_806FF844:
{
    r6 = (r6 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806FF808;
    }
}

loc_806FF850:
{
    r3 = 0;
}

loc_806FF854:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806FF6C8 func_806FF6C8 preserves=true fpr_mask=0x00000000
