#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_8070482C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

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

    goto loc_8070482C;

loc_8070482C:
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
    r3 = (r3 + 140);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_5BF = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_5BF[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_5BF[1]);
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

loc_80704858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704864;
    }
}

loc_8070485C:
{
    r3 = 0;
    goto loc_8070497C;
}

loc_80704864:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
    r31 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80704870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704894;
    }
}

loc_80704874:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704880;
    }
}

loc_80704878:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80704884;
}

loc_80704880:
{
    r0 = -1;
}

loc_80704884:
{
}

loc_80704888:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80704894;
    }
}

loc_8070488C:
{
    r31 = (r29 + 128);
    goto loc_807048BC;
}

loc_80704894:
{
    r3 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070489C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807048BC;
    }
}

loc_807048A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807048AC;
    }
}

loc_807048A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807048B0;
}

loc_807048AC:
{
    r0 = -1;
}

loc_807048B0:
{
}

loc_807048B4:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_807048BC;
    }
}

loc_807048B8:
{
    r31 = (r29 + 132);
}

loc_807048BC:
{
}

loc_807048C0:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80704954;
    }
}

loc_807048C4:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807048CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807048D8;
    }
}

loc_807048D0:
{
    r31 = (r29 + 128);
    goto loc_80704954;
}

loc_807048D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807048E4;
    }
}

loc_807048DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807048E8;
}

loc_807048E4:
{
    r0 = -1;
}

loc_807048E8:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807048F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80704900;
    }
}

loc_807048F8:
{
    r31 = (r29 + 132);
    goto loc_80704954;
}

loc_80704900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070490C;
    }
}

loc_80704904:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80704910;
}

loc_8070490C:
{
    r0 = -1;
}

loc_80704910:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = r30;
    r3 = (r29 + 140);
    r5 = (r1 + 8);
    r6 = 2;
    ctx->lr = 0x80704928u;
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

loc_8070492C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80704938;
    }
}

loc_80704930:
{
    r31 = 0;
    goto loc_80704954;
}

loc_80704938:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31 = (r29 + r0);
    r31 = (r31 + 128);
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80704948:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704954;
    }
}

loc_8070494C:
{
    r4 = 0;
    ctx->lr = 0x80704954u;
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

loc_80704954:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80704958:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704978;
    }
}

loc_8070495C:
{
    r3 = r29;
    r4 = r31;
    r5 = r30;
    r6 = 0;
    ctx->lr = 0x80704970u;
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
    goto loc_8070497C;
}

loc_80704978:
{
    r3 = 0;
}

loc_8070497C:
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
// RECOMP_REGISTRATION base 0x8070482C func_8070482C preserves=true fpr_mask=0x00000000
