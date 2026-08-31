#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_807014E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807014E8;

loc_807014E8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r3 = (r3 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_5E6 = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_5E6[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_5E6[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x807028E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80701514:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701520;
    }
}

loc_80701518:
{
    r3 = 0;
    goto loc_807016E0;
}

loc_80701520:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 128), 0, 16u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 128));
    r31 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070152C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701550;
    }
}

loc_80701530:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070153C;
    }
}

loc_80701534:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80701540;
}

loc_8070153C:
{
    r0 = -1;
}

loc_80701540:
{
}

loc_80701544:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80701550;
    }
}

loc_80701548:
{
    r31 = (r29 + 128);
    goto loc_807015D0;
}

loc_80701550:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80701558:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070157C;
    }
}

loc_8070155C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701568;
    }
}

loc_80701560:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070156C;
}

loc_80701568:
{
    r0 = -1;
}

loc_8070156C:
{
}

loc_80701570:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_8070157C;
    }
}

loc_80701574:
{
    r31 = (r29 + 132);
    goto loc_807015D0;
}

loc_8070157C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80701584:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807015A8;
    }
}

loc_80701588:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701594;
    }
}

loc_8070158C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80701598;
}

loc_80701594:
{
    r0 = -1;
}

loc_80701598:
{
}

loc_8070159C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_807015A8;
    }
}

loc_807015A0:
{
    r31 = (r29 + 136);
    goto loc_807015D0;
}

loc_807015A8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807015B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807015D0;
    }
}

loc_807015B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807015C0;
    }
}

loc_807015B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807015C4;
}

loc_807015C0:
{
    r0 = -1;
}

loc_807015C4:
{
}

loc_807015C8:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_807015D0;
    }
}

loc_807015CC:
{
    r31 = (r29 + 140);
}

loc_807015D0:
{
}

loc_807015D4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_807016B8;
    }
}

loc_807015D8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807015E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807015EC;
    }
}

loc_807015E4:
{
    r31 = (r29 + 128);
    goto loc_807016B8;
}

loc_807015EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807015F8;
    }
}

loc_807015F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807015FC;
}

loc_807015F8:
{
    r0 = -1;
}

loc_807015FC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80701608:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80701614;
    }
}

loc_8070160C:
{
    r31 = (r29 + 132);
    goto loc_807016B8;
}

loc_80701614:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701620;
    }
}

loc_80701618:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80701624;
}

loc_80701620:
{
    r0 = -1;
}

loc_80701624:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80701630:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070163C;
    }
}

loc_80701634:
{
    r31 = (r29 + 136);
    goto loc_807016B8;
}

loc_8070163C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701648;
    }
}

loc_80701640:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070164C;
}

loc_80701648:
{
    r0 = -1;
}

loc_8070164C:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80701658:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80701664;
    }
}

loc_8070165C:
{
    r31 = (r29 + 140);
    goto loc_807016B8;
}

loc_80701664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701670;
    }
}

loc_80701668:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80701674;
}

loc_80701670:
{
    r0 = -1;
}

loc_80701674:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r30;
    r3 = (r29 + 148);
    r5 = (r1 + 8);
    r6 = 4;
    ctx->lr = 0x8070168Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80702848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80701690:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8070169C;
    }
}

loc_80701694:
{
    r31 = 0;
    goto loc_807016B8;
}

loc_8070169C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31 = (r29 + r0);
    r31 = (r31 + 128);
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807016AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807016B8;
    }
}

loc_807016B0:
{
    r4 = 0;
    ctx->lr = 0x807016B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807016B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807016BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807016DC;
    }
}

loc_807016C0:
{
    r3 = r29;
    r4 = r31;
    r5 = r30;
    r6 = 0;
    ctx->lr = 0x807016D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A3F90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    goto loc_807016E0;
}

loc_807016DC:
{
    r3 = 0;
}

loc_807016E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807014E8 func_807014E8 preserves=true fpr_mask=0x00000000
