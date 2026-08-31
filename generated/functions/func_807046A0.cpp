#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_807046A0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807046A0;

loc_807046A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 169));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807046C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807046E0;
    }
}

loc_807046CC:
{
    r0 = (r4 + -259);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807046D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807046E0;
    }
}

loc_807046D8:
{
    r3 = 0;
    goto loc_80704810;
}

loc_807046E0:
{
    r3 = (r3 + 140);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_7F3 = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_7F3[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_7F3[1]);
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

loc_807046EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807046F8;
    }
}

loc_807046F0:
{
    r31 = 0;
    goto loc_8070480C;
}

loc_807046F8:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
    r31 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80704704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704728;
    }
}

loc_80704708:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704714;
    }
}

loc_8070470C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80704718;
}

loc_80704714:
{
    r0 = -1;
}

loc_80704718:
{
}

loc_8070471C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80704728;
    }
}

loc_80704720:
{
    r31 = (r29 + 128);
    goto loc_80704750;
}

loc_80704728:
{
    r3 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80704730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704750;
    }
}

loc_80704734:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704740;
    }
}

loc_80704738:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80704744;
}

loc_80704740:
{
    r0 = -1;
}

loc_80704744:
{
}

loc_80704748:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80704750;
    }
}

loc_8070474C:
{
    r31 = (r29 + 132);
}

loc_80704750:
{
}

loc_80704754:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_807047E8;
    }
}

loc_80704758:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80704760:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070476C;
    }
}

loc_80704764:
{
    r31 = (r29 + 128);
    goto loc_807047E8;
}

loc_8070476C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704778;
    }
}

loc_80704770:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070477C;
}

loc_80704778:
{
    r0 = -1;
}

loc_8070477C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80704788:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80704794;
    }
}

loc_8070478C:
{
    r31 = (r29 + 132);
    goto loc_807047E8;
}

loc_80704794:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807047A0;
    }
}

loc_80704798:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807047A4;
}

loc_807047A0:
{
    r0 = -1;
}

loc_807047A4:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = r30;
    r3 = (r29 + 140);
    r5 = (r1 + 8);
    r6 = 2;
    ctx->lr = 0x807047BCu;
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

loc_807047C0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_807047CC;
    }
}

loc_807047C4:
{
    r31 = 0;
    goto loc_807047E8;
}

loc_807047CC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31 = (r29 + r0);
    r31 = (r31 + 128);
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807047DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807047E8;
    }
}

loc_807047E0:
{
    r4 = 0;
    ctx->lr = 0x807047E8u;
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

loc_807047E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807047EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704808;
    }
}

loc_807047F0:
{
    r3 = r29;
    r4 = r31;
    r5 = r30;
    r6 = 0;
    ctx->lr = 0x80704804u;
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
    goto loc_8070480C;
}

loc_80704808:
{
    r31 = 0;
}

loc_8070480C:
{
    r3 = r31;
}

loc_80704810:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
// RECOMP_REGISTRATION base 0x807046A0 func_807046A0 preserves=true fpr_mask=0x00000000
