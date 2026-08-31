#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805CE630(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805CE630;

loc_805CE630:
{
}

loc_805CE634:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_805CE8F0;
    }
}

loc_805CE638:
{
    r0 = MemoryInline::FlatRead16((r20 + 6));
}

loc_805CE640:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_805CE8F0;
    }
}

loc_805CE644:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 262140);
    r3 = MemoryInline::FlatRead32((r28 + 7736));
    r4 = (r17 + r0);
    r20 = MemoryInline::FlatRead32((r4 + 120));
    r3 = (r3 + 52);
    r4 = r20;
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl0_0x8061B358:
{
}

loc_inl0_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl0_0x8061B368;
    }
}

loc_inl0_0x8061B360:
{
    r3 = 0;
    goto loc_inl0_cont_8061B358;
}

loc_inl0_0x8061B368:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
    r0 = (r3 & 4080);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(784));
}

loc_805CE668:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805CE6D4;
    }
}

loc_805CE66C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805CE6A0;
    }
}

loc_805CE670:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(528));
}

loc_805CE674:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805CE6CC;
    }
}

loc_805CE678:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805CE694;
    }
}

loc_805CE67C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(288));
}

loc_805CE680:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805CE6E4;
    }
}

loc_805CE684:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805CE704;
    }
}

loc_805CE688:
{
}

loc_805CE68C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(272))) {
        goto loc_805CE6C4;
    }
}

loc_805CE690:
{
    goto loc_805CE704;
}

loc_805CE694:
{
}

loc_805CE698:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(544))) {
        goto loc_805CE6EC;
    }
}

loc_805CE69C:
{
    goto loc_805CE704;
}

loc_805CE6A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1040));
}

loc_805CE6A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805CE6DC;
    }
}

loc_805CE6A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805CE6B8;
    }
}

loc_805CE6AC:
{
}

loc_805CE6B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(800))) {
        goto loc_805CE6F4;
    }
}

loc_805CE6B4:
{
    goto loc_805CE704;
}

loc_805CE6B8:
{
}

loc_805CE6BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1056))) {
        goto loc_805CE6FC;
    }
}

loc_805CE6C0:
{
    goto loc_805CE704;
}

loc_805CE6C4:
{
    r3 = 0;
    goto loc_805CE708;
}

loc_805CE6CC:
{
    r3 = 1;
    goto loc_805CE708;
}

loc_805CE6D4:
{
    r3 = 2;
    goto loc_805CE708;
}

loc_805CE6DC:
{
    r3 = 3;
    goto loc_805CE708;
}

loc_805CE6E4:
{
    r3 = 4;
    goto loc_805CE708;
}

loc_805CE6EC:
{
    r3 = 5;
    goto loc_805CE708;
}

loc_805CE6F4:
{
    r3 = 6;
    goto loc_805CE708;
}

loc_805CE6FC:
{
    r3 = 7;
    goto loc_805CE708;
}

loc_805CE704:
{
    r3 = (r29 + -3839);
}

loc_805CE708:
{
    r0 = (r3 & 65535);
}

loc_805CE710:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(61697))) {
        goto loc_805CE788;
    }
}

loc_805CE714:
{
    r0 = MemoryInline::FlatRead8((r17 + 192));
}

loc_805CE71C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805CE780;
    }
}

loc_805CE720:
{
}

loc_805CE724:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_805CE744;
    }
}

loc_805CE728:
{
}

loc_805CE72C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(1))) {
        goto loc_805CE750;
    }
}

loc_805CE730:
{
}

loc_805CE734:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(2))) {
        goto loc_805CE75C;
    }
}

loc_805CE738:
{
}

loc_805CE73C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(3))) {
        goto loc_805CE768;
    }
}

loc_805CE740:
{
    goto loc_805CE774;
}

loc_805CE744:
{
    r0 = (r3 | 61704);
    r3 = (r0 & 65535);
    goto loc_805CE788;
}

loc_805CE750:
{
    r0 = (r3 | 61712);
    r3 = (r0 & 65535);
    goto loc_805CE788;
}

loc_805CE75C:
{
    r0 = (r3 | 61720);
    r3 = (r0 & 65535);
    goto loc_805CE788;
}

loc_805CE768:
{
    r0 = (r3 | 61728);
    r3 = (r0 & 65535);
    goto loc_805CE788;
}

loc_805CE774:
{
    r0 = (r3 | 61736);
    r3 = (r0 & 65535);
    goto loc_805CE788;
}

loc_805CE780:
{
    r0 = (r3 | 61736);
    r3 = (r0 & 65535);
}

loc_805CE788:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r3));
    r21 = (r1 + 48);
    MemoryInline::FlatWriteRam16((r1 + 50), static_cast<uint16_t>(r0));
    goto loc_805CE8F0;
}

loc_805CE8DC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(32));
}

loc_805CE8E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CE8EC;
    }
}

loc_805CE8E4:
{
    r3 = MemoryInline::FlatRead32((r25 + 7136));
    ctx->lr = 0x805CE8ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D00B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r17 = ctx->gpr[17];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805CE8EC:
{
    r21 = (r21 + 2);
}

loc_805CE8F0:
{
    r4 = MemoryInline::FlatRead16(r21);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805CE8F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805CE8DC;
    }
}

loc_805CE8FC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    InvokeDirectCpu<0x805CDF28u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r17 = ctx->gpr[17];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805CE630 func_805CE630 preserves=true fpr_mask=0x00000000
