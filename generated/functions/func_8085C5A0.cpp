#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085C5A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085C5A0;

loc_8085C5A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(31));
}

loc_8085C5D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085C838;
    }
}

loc_8085C5D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(45));
}

loc_8085C5D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085C5E0;
    }
}

loc_8085C5DC:
{
    goto loc_8085C838;
}

loc_8085C5E0:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8085C5F0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8085C610;
    }
}

loc_8085C5F4:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r30 = (r3 + 56);
    goto loc_8085C614;
}

loc_8085C610:
{
    r30 = 0;
}

loc_8085C614:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_8085C624:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8085C630;
    }
}

loc_8085C628:
{
}

loc_8085C62C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_8085C640;
    }
}

loc_8085C630:
{
}

loc_8085C634:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_8085C828;
    }
}

loc_8085C638:
{
}

loc_8085C63C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(8))) {
        goto loc_8085C828;
    }
}

loc_8085C640:
{
    r4 = 0;
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead8((r3 + 32));
}

loc_8085C664:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8085C698;
    }
}

loc_8085C668:
{
    r5 = (r30 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r5 + -27976));
    r0 = (r3 + -31073);
}

loc_8085C67C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8085C688;
    }
}

loc_8085C680:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + -27976), r0);
}

loc_8085C688:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl1_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl1_0x80621418:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl1_0x80621424:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
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
}

loc_8085C698:
{
    r28 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r4 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r28 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & 1020);
    r0 = MemoryInline::FlatRead32((r7 + 2928));
    r3 = 0;
    r6 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8085C6C8:
{
    r4 = MemoryInline::FlatRead8((r7 + 36));
    r6_addr_1 = (r6 + r5);
    r5 = MemoryInline::FlatRead32(r6_addr_1);
    r31 = MemoryInline::FlatRead8((r5 + 32));
    r29 = (r4 - r31);
    r28 = (r31 + -1);
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_8085C6EC;
    }
}

loc_8085C6E0:
{
}

loc_8085C6E4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_8085C6EC;
    }
}

loc_8085C6E8:
{
    r3 = 1;
}

loc_8085C6EC:
{
}

loc_8085C6F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8085C754;
    }
}

loc_8085C6F4:
{
    r0 = MemoryInline::FlatRead8((r7 + 38));
}

loc_8085C6FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8085C754;
    }
}

loc_8085C700:
{
    r3 = r7;
    r4 = 1;
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r4 = 0x809C0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = MemoryInline::FlatRead8((r4 + 32));
}

loc_8085C728:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_8085C730;
    }
}

loc_8085C72C:
{
    r29 = (r29 + -1);
}

loc_8085C730:
{
    r4 = 0x809C0000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead8((r3 + 32));
}

loc_8085C74C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_8085C754;
    }
}

loc_8085C750:
{
    r28 = (r28 + -1);
}

loc_8085C754:
{
    r4 = (r30 + 65536);
    r3 = 131072;
    r5 = MemoryInline::FlatRead32((r4 + -28052));
    r4 = (r29 & 65535);
    r0 = (r3 + -31073);
    r4 = (r5 + r4);
}

loc_8085C770:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_8085C778;
    }
}

loc_8085C774:
{
    r4 = r0;
}

loc_8085C778:
{
    r5 = (r30 + 65536);
    r3 = 131072;
    MemoryInline::FlatWrite32((r5 + -28052), r4);
    r0 = (r3 + -31073);
    r4 = (r28 & 65535);
    r3 = MemoryInline::FlatRead32((r5 + -28048));
    r5 = (r3 + r4);
}

loc_8085C798:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_8085C7A0;
    }
}

loc_8085C79C:
{
    r5 = r0;
}

loc_8085C7A0:
{
    r3 = (r30 + 65536);
    r4 = 0x809C0000u;
    MemoryInline::FlatWrite32((r3 + -28048), r5);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_8085C7BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8085C7C8;
    }
}

loc_8085C7C0:
{
}

loc_8085C7C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8085C7CC;
    }
}

loc_8085C7C8:
{
    r3 = 1;
}

loc_8085C7CC:
{
}

loc_8085C7D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8085C828;
    }
}

loc_8085C7D4:
{
    r4 = (r30 + 65536);
    r3 = 131072;
    r5 = MemoryInline::FlatRead32((r4 + -28036));
    r4 = (r29 & 65535);
    r0 = (r3 + -31073);
    r4 = (r5 + r4);
}

loc_8085C7F0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_8085C7F8;
    }
}

loc_8085C7F4:
{
    r4 = r0;
}

loc_8085C7F8:
{
    r5 = (r30 + 65536);
    r3 = 131072;
    MemoryInline::FlatWrite32((r5 + -28036), r4);
    r0 = (r3 + -31073);
    r4 = (r28 & 65535);
    r3 = MemoryInline::FlatRead32((r5 + -28032));
    r4 = (r3 + r4);
}

loc_8085C818:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_8085C820;
    }
}

loc_8085C81C:
{
    r4 = r0;
}

loc_8085C820:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -28032), r4);
}

loc_8085C828:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl4_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl4_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl4_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl4_cont_80621410;
}

loc_inl4_return:
{
}

loc_inl4_cont_80621410:
{
    // end of inlined leaf 0x80621410
}

loc_8085C838:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8085C5A0 func_8085C5A0 preserves=true fpr_mask=0x00000000
