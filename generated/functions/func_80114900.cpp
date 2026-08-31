#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114900(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

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

    goto loc_80114900;

loc_80114900:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r6 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r6 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8011492C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80114938;
    }
}

loc_80114930:
{
    r3 = 1;
    goto loc_80114B00;
}

loc_80114938:
{
    r0 = MemoryInline::FlatRead32((r4 + 404));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80114940:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114950;
    }
}

loc_80114944:
{
    r0 = MemoryInline::FlatRead32((r4 + 420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011494C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80114A2C;
    }
}

loc_80114950:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r5 - r4);
    r4 = (r0 + r4);
    ctx->lr = 0x80114968u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80112348u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_8011496C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114980;
    }
}

loc_80114970:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80114990;
    }
}

loc_80114974:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-2));
}

loc_80114978:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80114988;
    }
}

loc_8011497C:
{
    goto loc_80114990;
}

loc_80114980:
{
    r3 = 0;
    goto loc_80114B00;
}

loc_80114988:
{
    r3 = 2;
    goto loc_80114B00;
}

loc_80114990:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r6 = MemoryInline::FlatRead32(r30);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r5 = MemoryInline::FlatRead32((r6 + 12));
}

loc_801149A8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80114A1C;
    }
}

loc_801149AC:
{
    r3 = MemoryInline::FlatRead32((r31 + 352));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801149B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114A14;
    }
}

loc_801149BC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & -1073741824);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -1);
    r0 = (r0 + r3);
    r5 = (4 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_801149EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114A14;
    }
}

loc_801149F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801149F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80114A14;
    }
}

loc_801149F8:
{
    r3 = r31;
    r4 = (r1 + 12);
    ctx->lr = 0x80114A04u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8011248Cu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80114A08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80114A14;
    }
}

loc_80114A0C:
{
    r3 = 0;
    goto loc_80114B00;
}

loc_80114A14:
{
    r3 = 1;
    goto loc_80114B00;
}

loc_80114A1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80114A20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80114950;
    }
}

loc_80114A24:
{
    r3 = 2;
    goto loc_80114B00;
}

loc_80114A2C:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r29 = 16129;
    r0 = (r5 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16129));
}

loc_80114A3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80114A44;
    }
}

loc_80114A40:
{
    r29 = r0;
}

loc_80114A44:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r3 = r31;
    r5 = r29;
    r4 = (r0 + r4);
    ctx->lr = 0x80114A58u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8011248Cu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80114A5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80114A68;
    }
}

loc_80114A60:
{
    r3 = 0;
    goto loc_80114B00;
}

loc_80114A68:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r6 = MemoryInline::FlatRead32(r30);
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r5 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80114A80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80114AF4;
    }
}

loc_80114A84:
{
    r3 = MemoryInline::FlatRead32((r31 + 352));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80114A90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114AEC;
    }
}

loc_80114A94:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & -1073741824);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -1);
    r0 = (r0 + r3);
    r5 = (4 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_80114AC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114AEC;
    }
}

loc_80114AC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80114ACC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80114AEC;
    }
}

loc_80114AD0:
{
    r3 = r31;
    r4 = (r1 + 8);
    ctx->lr = 0x80114ADCu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8011248Cu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80114AE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80114AEC;
    }
}

loc_80114AE4:
{
    r3 = 0;
    goto loc_80114B00;
}

loc_80114AEC:
{
    r3 = 1;
    goto loc_80114B00;
}

loc_80114AF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80114AF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114A2C;
    }
}

loc_80114AFC:
{
    r3 = 2;
}

loc_80114B00:
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80114900 func_80114900 preserves=true fpr_mask=0x00000000
