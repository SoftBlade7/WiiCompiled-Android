#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_80704364(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80704364;

loc_80704364:
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
}

loc_8070438C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807043A8;
    }
}

loc_80704390:
{
}

loc_80704394:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(288))) {
        goto loc_807043A8;
    }
}

loc_80704398:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(256));
}

loc_8070439C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807043A8;
    }
}

loc_807043A0:
{
    r3 = 0;
    goto loc_80704578;
}

loc_807043A8:
{
}

loc_807043AC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(250))) {
        goto loc_807043BC;
    }
}

loc_807043B0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(249));
}

loc_807043B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704434;
    }
}

loc_807043B8:
{
    goto loc_807044A8;
}

loc_807043BC:
{
    r5 = MemoryInline::FlatRead32((r3 + 128));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807043C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807043EC;
    }
}

loc_807043CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807043D8;
    }
}

loc_807043D0:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_807043DC;
}

loc_807043D8:
{
    r0 = -1;
}

loc_807043DC:
{
}

loc_807043E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(249))) {
        goto loc_807043EC;
    }
}

loc_807043E4:
{
    r4 = (r3 + 128);
    goto loc_80704414;
}

loc_807043EC:
{
    r5 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807043F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704414;
    }
}

loc_807043F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704404;
    }
}

loc_807043FC:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80704408;
}

loc_80704404:
{
    r0 = -1;
}

loc_80704408:
{
}

loc_8070440C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(249))) {
        goto loc_80704414;
    }
}

loc_80704410:
{
    r4 = (r3 + 132);
}

loc_80704414:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80704418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807044A8;
    }
}

loc_8070441C:
{
    r3 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80704424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807044A8;
    }
}

loc_80704428:
{
    r4 = 0;
    ctx->lr = 0x80704430u;
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
    goto loc_807044A8;
}

loc_80704434:
{
    r6 = MemoryInline::FlatRead32((r3 + 128));
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80704440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704464;
    }
}

loc_80704444:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704450;
    }
}

loc_80704448:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80704454;
}

loc_80704450:
{
    r0 = -1;
}

loc_80704454:
{
}

loc_80704458:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80704464;
    }
}

loc_8070445C:
{
    r5 = (r3 + 128);
    goto loc_8070448C;
}

loc_80704464:
{
    r6 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070446C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070448C;
    }
}

loc_80704470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070447C;
    }
}

loc_80704474:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_80704480;
}

loc_8070447C:
{
    r0 = -1;
}

loc_80704480:
{
}

loc_80704484:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8070448C;
    }
}

loc_80704488:
{
    r5 = (r3 + 132);
}

loc_8070448C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80704490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807044A8;
    }
}

loc_80704494:
{
    r3 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070449C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807044A8;
    }
}

loc_807044A0:
{
    r4 = 0;
    ctx->lr = 0x807044A8u;
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

loc_807044A8:
{
    r3 = (r29 + 140);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_1CCD = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_1CCD[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_1CCD[1]);
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

loc_807044B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807044C0;
    }
}

loc_807044B8:
{
    r31 = 0;
    goto loc_80704574;
}

loc_807044C0:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807044C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807044D4;
    }
}

loc_807044CC:
{
    r31 = (r29 + 128);
    goto loc_80704550;
}

loc_807044D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807044E0;
    }
}

loc_807044D8:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807044E4;
}

loc_807044E0:
{
    r0 = -1;
}

loc_807044E4:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807044F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807044FC;
    }
}

loc_807044F4:
{
    r31 = (r29 + 132);
    goto loc_80704550;
}

loc_807044FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704508;
    }
}

loc_80704500:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070450C;
}

loc_80704508:
{
    r0 = -1;
}

loc_8070450C:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = r30;
    r3 = (r29 + 140);
    r5 = (r1 + 8);
    r6 = 2;
    ctx->lr = 0x80704524u;
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

loc_80704528:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80704534;
    }
}

loc_8070452C:
{
    r31 = 0;
    goto loc_80704550;
}

loc_80704534:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31 = (r29 + r0);
    r31 = (r31 + 128);
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80704544:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704550;
    }
}

loc_80704548:
{
    r4 = 0;
    ctx->lr = 0x80704550u;
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

loc_80704550:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80704554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704570;
    }
}

loc_80704558:
{
    r3 = r29;
    r4 = r31;
    r5 = r30;
    r6 = 0;
    ctx->lr = 0x8070456Cu;
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
    InvokeDirectCpu<0x800A3E80u>(ctx);
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
    goto loc_80704574;
}

loc_80704570:
{
    r31 = 0;
}

loc_80704574:
{
    r3 = r31;
}

loc_80704578:
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
// RECOMP_REGISTRATION base 0x80704364 func_80704364 preserves=true fpr_mask=0x00000000
