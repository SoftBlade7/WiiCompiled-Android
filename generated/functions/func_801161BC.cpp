#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801161BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801161BC;

loc_801161BC:
{
    MemoryInline::FlatWriteRam32((r1 + -1056), r1);
    r1 = (r1 + -1056);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1060), r0);
    r0 = 1024;
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 1052), r31);
    MemoryInline::FlatWriteRam32((r1 + 1048), r30);
    MemoryInline::FlatWriteRam32((r1 + 1044), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x801161ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8011218Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_801161F0:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80116330;
    }
}

loc_801161F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_801161FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80116330;
    }
}

loc_80116200:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80116204:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80116274;
    }
}

loc_80116208:
{
    r0 = MemoryInline::FlatRead32((r29 + 404));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80116210:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011625C;
    }
}

loc_80116214:
{
    r0 = MemoryInline::FlatRead32((r29 + 420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8011621C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011625C;
    }
}

loc_80116220:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r29 + 192);
    r4 = (r1 + 16);
    ctx->lr = 0x80116230u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80111850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80116234:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80116330;
    }
}

loc_80116238:
{
    r3 = r29;
    ctx->lr = 0x80116240u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8011203Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80116244:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80116274;
    }
}

loc_80116248:
{
    r3 = 1;
    r0 = 17;
    MemoryInline::FlatWrite32((r29 + 288), r3);
    MemoryInline::FlatWrite32((r29 + 60), r0);
    goto loc_80116330;
}

loc_8011625C:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r29 + 156);
    r4 = (r1 + 16);
    ctx->lr = 0x8011626Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80111850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80116270:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80116330;
    }
}

loc_80116274:
{
    r3 = MemoryInline::FlatRead32((r29 + 160));
    r4 = (r13 + -30152);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80116284:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011630C;
    }
}

loc_80116288:
{
    r31 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r29 + 160));
    r30 = (r3 - r0);
    r3 = r29;
    ctx->lr = 0x801162A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801160A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801162A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80116330;
    }
}

loc_801162A8:
{
    r0 = MemoryInline::FlatRead32((r29 + 276));
    r3 = (r30 + 2);
    MemoryInline::FlatWrite32((r29 + 284), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_801162B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801162F0;
    }
}

loc_801162BC:
{
    r0 = MemoryInline::FlatRead32((r29 + 380));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801162C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801162F0;
    }
}

loc_801162C8:
{
    MemoryInline::FlatWrite32((r29 + 380), r31);
    r3 = (r29 + 156);
    // inline leaf 0x80111DC4 (9 guest instruction(s))
}

loc_inl0_0x80111DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80111DD4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80111DDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    goto loc_inl0_cont_80111DC4;
}

loc_inl0_return:
{
}

loc_inl0_cont_80111DC4:
{
    // end of inlined leaf 0x80111DC4
    r0 = 6;
    r3 = r29;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x801162ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80111F94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80116330;
}

loc_801162F0:
{
    r0 = 9;
    r3 = r29;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80116308u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80111F94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80116330;
}

loc_8011630C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_80116310:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80116330;
    }
}

loc_80116314:
{
    r3 = 1;
    r0 = 7;
    MemoryInline::FlatWrite32((r29 + 288), r3);
    r3 = MemoryInline::FlatRead32((r29 + 76));
    MemoryInline::FlatWrite32((r29 + 60), r0);
    // inline leaf 0x800F151C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26796));
    // end of inlined leaf 0x800F151C
    MemoryInline::FlatWrite32((r29 + 80), r3);
}

loc_80116330:
{
    r0 = MemoryInline::FlatRead32((r1 + 1060));
    r31 = MemoryInline::FlatRead32((r1 + 1052));
    r30 = MemoryInline::FlatRead32((r1 + 1048));
    r29 = MemoryInline::FlatRead32((r1 + 1044));
    ctx->lr = r0;
    r1 = (r1 + 1056);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801161BC func_801161BC preserves=true fpr_mask=0x00000000
