#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_8085F5EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r3_subfic_ra_0 = 0;
    uint32_t r3_subfic_ra_1 = 0;
    uint32_t r3_subfic_ra_10 = 0;
    uint32_t r3_subfic_ra_11 = 0;
    uint32_t r3_subfic_ra_2 = 0;
    uint32_t r3_subfic_ra_3 = 0;
    uint32_t r3_subfic_ra_4 = 0;
    uint32_t r3_subfic_ra_5 = 0;
    uint32_t r3_subfic_ra_6 = 0;
    uint32_t r3_subfic_ra_7 = 0;
    uint32_t r3_subfic_ra_8 = 0;
    uint32_t r3_subfic_ra_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8085F5EC;

loc_8085F5EC:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 236), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 232), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 228), r29);
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_7F0 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_7F0[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_7F0[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8085F624:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8085F644;
    }
}

loc_8085F628:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_8085F648;
}

loc_8085F644:
{
    r3 = 0;
}

loc_8085F648:
{
}

loc_8085F64C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8085F67C;
    }
}

loc_8085F650:
{
}

loc_8085F654:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_8085F834;
    }
}

loc_8085F658:
{
}

loc_8085F65C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(2))) {
        goto loc_8085F868;
    }
}

loc_8085F660:
{
}

loc_8085F664:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(3))) {
        goto loc_8085F88C;
    }
}

loc_8085F668:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(4));
}

loc_8085F66C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085F8B0;
    }
}

loc_8085F670:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(5));
}

loc_8085F674:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085F8C8;
    }
}

loc_8085F678:
{
    goto loc_8085F8E8;
}

loc_8085F67C:
{
    r6 = (r3 + 32);
    r7 = 0;
    r4 = r6;
    r8 = 0;
    r9 = 7;
    r10 = 0;
    r0 = 2;
}

loc_8085F698:
{
    r5 = r4;
    r11 = 0;
    ctr = r0;
}

loc_8085F6A4:
{
    r3 = MemoryInline::FlatRead8((r5 + 86));
}

loc_8085F6AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8085F6C0;
    }
}

loc_8085F6B0:
{
    r3 = MemoryInline::FlatRead32((r5 + 96));
    r8 = (r8 + 1);
    r3_subfic_ra_3 = r3;
    r3 = (8 - r3_subfic_ra_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r3_subfic_ra_3) ? 1u : 0u) << 29);
    r7 = (r7 + r3);
}

loc_8085F6C0:
{
    r3 = MemoryInline::FlatRead8((r5 + 198));
}

loc_8085F6C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8085F6DC;
    }
}

loc_8085F6CC:
{
    r3 = MemoryInline::FlatRead32((r5 + 208));
    r8 = (r8 + 1);
    r3_subfic_ra_5 = r3;
    r3 = (8 - r3_subfic_ra_5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r3_subfic_ra_5) ? 1u : 0u) << 29);
    r7 = (r7 + r3);
}

loc_8085F6DC:
{
    r3 = MemoryInline::FlatRead8((r5 + 310));
}

loc_8085F6E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8085F6F8;
    }
}

loc_8085F6E8:
{
    r3 = MemoryInline::FlatRead32((r5 + 320));
    r8 = (r8 + 1);
    r3_subfic_ra_7 = r3;
    r3 = (8 - r3_subfic_ra_7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r3_subfic_ra_7) ? 1u : 0u) << 29);
    r7 = (r7 + r3);
}

loc_8085F6F8:
{
    r3 = MemoryInline::FlatRead8((r5 + 422));
}

loc_8085F700:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8085F714;
    }
}

loc_8085F704:
{
    r3 = MemoryInline::FlatRead32((r5 + 432));
    r8 = (r8 + 1);
    r3_subfic_ra_9 = r3;
    r3 = (8 - r3_subfic_ra_9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r3_subfic_ra_9) ? 1u : 0u) << 29);
    r7 = (r7 + r3);
}

loc_8085F714:
{
    r5 = (r5 + 448);
    r11 = (r11 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8085F6A4;
    }
}

loc_8085F720:
{
    r10 = (r10 + 1);
    r4 = (r4 + 896);
}

loc_8085F72C:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(4))) {
        goto loc_8085F698;
    }
}

loc_8085F730:
{
}

loc_8085F734:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8085F740;
    }
}

loc_8085F738:
{
    r0 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r8));
    r9 = (8 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_8085F740:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(3));
}

loc_8085F744:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8085F754;
    }
}

loc_8085F748:
{
    r0 = (r9 + 3373);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    goto loc_8085F8E8;
}

loc_8085F754:
{
    r5 = 0;
    r7 = 0;
    r0 = 2;
}

loc_8085F760:
{
    r4 = r6;
    r8 = 0;
    ctr = r0;
}

loc_8085F76C:
{
    r3 = MemoryInline::FlatRead8((r4 + 86));
}

loc_8085F774:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8085F780;
    }
}

loc_8085F778:
{
    r5 = 7;
    goto loc_8085F790;
}

loc_8085F780:
{
    r3 = MemoryInline::FlatRead32((r4 + 96));
}

loc_8085F788:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_8085F790;
    }
}

loc_8085F78C:
{
    r5 = r3;
}

loc_8085F790:
{
    r3 = MemoryInline::FlatRead8((r4 + 198));
}

loc_8085F798:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8085F7A4;
    }
}

loc_8085F79C:
{
    r5 = 7;
    goto loc_8085F7B4;
}

loc_8085F7A4:
{
    r3 = MemoryInline::FlatRead32((r4 + 208));
}

loc_8085F7AC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_8085F7B4;
    }
}

loc_8085F7B0:
{
    r5 = r3;
}

loc_8085F7B4:
{
    r3 = MemoryInline::FlatRead8((r4 + 310));
}

loc_8085F7BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8085F7C8;
    }
}

loc_8085F7C0:
{
    r5 = 7;
    goto loc_8085F7D8;
}

loc_8085F7C8:
{
    r3 = MemoryInline::FlatRead32((r4 + 320));
}

loc_8085F7D0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_8085F7D8;
    }
}

loc_8085F7D4:
{
    r5 = r3;
}

loc_8085F7D8:
{
    r3 = MemoryInline::FlatRead8((r4 + 422));
}

loc_8085F7E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8085F7EC;
    }
}

loc_8085F7E4:
{
    r5 = 7;
    goto loc_8085F7FC;
}

loc_8085F7EC:
{
    r3 = MemoryInline::FlatRead32((r4 + 432));
}

loc_8085F7F4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_8085F7FC;
    }
}

loc_8085F7F8:
{
    r5 = r3;
}

loc_8085F7FC:
{
    r4 = (r4 + 448);
    r8 = (r8 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8085F76C;
    }
}

loc_8085F808:
{
    r7 = (r7 + 1);
    r6 = (r6 + 896);
}

loc_8085F814:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(4))) {
        goto loc_8085F760;
    }
}

loc_8085F818:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_8085F81C:
{
    r3 = 3;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8085F828;
    }
}

loc_8085F824:
{
    r3 = r5;
}

loc_8085F828:
{
    r0 = (r3 + 3373);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    goto loc_8085F8E8;
}

loc_8085F834:
{
    r4 = (r3 + 65536);
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -27972));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -3164));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8085F848:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085F850;
    }
}

loc_8085F84C:
{
    goto loc_8085F854;
}

loc_8085F850:
{
    f1.d = f0.d;
}

loc_8085F854:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8085F8E8;
}

loc_8085F868:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r4 + -28012));
    r0 = (r3 + -31073);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8085F87C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085F884;
    }
}

loc_8085F880:
{
    r0 = r4;
}

loc_8085F884:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8085F8E8;
}

loc_8085F88C:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r4 + -28008));
    r0 = (r3 + -31073);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8085F8A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085F8A8;
    }
}

loc_8085F8A4:
{
    r0 = r4;
}

loc_8085F8A8:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8085F8E8;
}

loc_8085F8B0:
{
    ctx->lr = 0x8085F8B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80549720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8085F8E8;
}

loc_8085F8C8:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r4 + -27980));
    r0 = (r3 + -31073);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8085F8DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085F8E4;
    }
}

loc_8085F8E0:
{
    r0 = r4;
}

loc_8085F8E4:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_8085F8E8:
{
    r29 = 0x808B0000u;
    r3 = r31;
    r29 = (r29 + -3160);
    r5 = (r30 + 8210);
    r4 = (r29 + 54);
    r6 = 0;
    ctx->lr = 0x8085F904u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r29 + 64);
    r5 = (r30 + 8260);
    r6 = (r1 + 8);
    ctx->lr = 0x8085F918u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 244));
    r31 = MemoryInline::FlatRead32((r1 + 236));
    r30 = MemoryInline::FlatRead32((r1 + 232));
    r29 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8085F5EC func_8085F5EC preserves=true fpr_mask=0x00000000
