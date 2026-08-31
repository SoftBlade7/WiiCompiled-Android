#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801157D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801157D8;

loc_801157D8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 76));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_801157F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115978;
    }
}

loc_801157F8:
{
    r3 = 2;
    r4 = 1;
    r5 = 6;
    ctx->lr = 0x80115808u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F118Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_8011580C:
{
    MemoryInline::FlatWrite32((r31 + 76), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115830;
    }
}

loc_80115814:
{
    r4 = 1;
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 288), r4);
    MemoryInline::FlatWrite32((r31 + 60), r0);
    // inline leaf 0x800F151C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26796));
    // end of inlined leaf 0x800F151C
    MemoryInline::FlatWrite32((r31 + 80), r3);
    goto loc_80115A20;
}

loc_80115830:
{
    r4 = 0;
    ctx->lr = 0x80115838u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F1BC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011583C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115860;
    }
}

loc_80115840:
{
    r3 = 1;
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 288), r3);
    r3 = MemoryInline::FlatRead32((r31 + 76));
    MemoryInline::FlatWrite32((r31 + 60), r0);
    // inline leaf 0x800F151C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26796));
    // end of inlined leaf 0x800F151C
    MemoryInline::FlatWrite32((r31 + 80), r3);
    goto loc_80115A20;
}

loc_80115860:
{
    r0 = 8192;
    r3 = 65536;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r3 + -1);
    r6 = (r1 + 8);
    r5 = 4097;
    r3 = MemoryInline::FlatRead32((r31 + 76));
    r7 = 4;
    ctx->lr = 0x80115884u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F1454u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115888:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801158AC;
    }
}

loc_8011588C:
{
    r3 = 1;
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 288), r3);
    r3 = MemoryInline::FlatRead32((r31 + 76));
    MemoryInline::FlatWrite32((r31 + 60), r0);
    // inline leaf 0x800F151C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26796));
    // end of inlined leaf 0x800F151C
    MemoryInline::FlatWrite32((r31 + 80), r3);
    goto loc_80115A20;
}

loc_801158AC:
{
    r0 = MemoryInline::FlatRead32((r31 + 344));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801158B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801158C4;
    }
}

loc_801158B8:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    r4 = MemoryInline::FlatRead32((r13 + -30248));
    ctx->lr = 0x801158C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F1C40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801158C4:
{
    r3 = (r1 + 24);
    r4 = 0;
    r5 = 8;
    ctx->lr = 0x801158D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 2;
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 392));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801158E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801158F8;
    }
}

loc_801158E8:
{
    r3 = MemoryInline::FlatRead16((r31 + 396));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r3));
    goto loc_80115920;
}

loc_801158F8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26764));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80115900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115914;
    }
}

loc_80115904:
{
    r3 = MemoryInline::FlatRead16((r13 + -26768));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r3));
    goto loc_80115920;
}

loc_80115914:
{
    r3 = MemoryInline::FlatRead16((r31 + 32));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r3));
}

loc_80115920:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r4 = (r1 + 24);
    r5 = 8;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = MemoryInline::FlatRead32((r31 + 76));
    ctx->lr = 0x80115938u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F12A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_8011593C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115978;
    }
}

loc_80115940:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    // inline leaf 0x800F151C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26796));
    // end of inlined leaf 0x800F151C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-6));
}

loc_8011594C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115978;
    }
}

loc_80115950:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-26));
}

loc_80115954:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115978;
    }
}

loc_80115958:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-76));
}

loc_8011595C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115978;
    }
}

loc_80115960:
{
    r4 = 1;
    r0 = 6;
    MemoryInline::FlatWrite32((r31 + 288), r4);
    MemoryInline::FlatWrite32((r31 + 60), r0);
    MemoryInline::FlatWrite32((r31 + 80), r3);
    goto loc_80115A20;
}

loc_80115978:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    r5 = (r1 + 16);
    r6 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x8011598Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F1524u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80115990:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_801159A8;
    }
}

loc_80115994:
{
}

loc_80115998:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_801159DC;
    }
}

loc_8011599C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_801159A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801159DC;
    }
}

loc_801159A8:
{
    r4 = 1;
    r0 = 6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_801159B4:
{
    MemoryInline::FlatWrite32((r31 + 288), r4);
    MemoryInline::FlatWrite32((r31 + 60), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801159D0;
    }
}

loc_801159C0:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    // inline leaf 0x800F151C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26796));
    // end of inlined leaf 0x800F151C
    MemoryInline::FlatWrite32((r31 + 80), r3);
    goto loc_80115A20;
}

loc_801159D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 80), r0);
    goto loc_80115A20;
}

loc_801159DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_801159E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115A20;
    }
}

loc_801159E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801159EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115A20;
    }
}

loc_801159F0:
{
    r0 = MemoryInline::FlatRead32((r31 + 404));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801159F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115A08;
    }
}

loc_801159FC:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    goto loc_80115A10;
}

loc_80115A08:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 16), r0);
}

loc_80115A10:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80115A20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80111F94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80115A20:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801157D8 func_801157D8 preserves=true fpr_mask=0x00000000
