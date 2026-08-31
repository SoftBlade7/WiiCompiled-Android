#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F4280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F4280;

loc_801F4280:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F428C:
{
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 120), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 116), r29);
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F42BC;
    }
}

loc_801F42AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F42B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F42BC;
    }
}

loc_801F42B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801F42B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F42C4;
    }
}

loc_801F42BC:
{
    r3 = 1;
    goto loc_801F4480;
}

loc_801F42C4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F1530u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F42CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F42D4;
    }
}

loc_801F42D0:
{
    goto loc_801F4480;
}

loc_801F42D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::FlatRead8((r30 + 510));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(85));
}

loc_801F42E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F42F4;
    }
}

loc_801F42E8:
{
    r0 = MemoryInline::FlatRead8((r30 + 511));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(170));
}

loc_801F42F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F42FC;
    }
}

loc_801F42F4:
{
    r3 = 0;
    goto loc_801F4480;
}

loc_801F42FC:
{
    r3 = r30;
    r5 = (r1 + 16);
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F3EE4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r4 = (r29 & 255);
    r6 = MemoryInline::FlatRead32((r1 + 40));
    r5 = 0x80360000u;
    r3 = (-1 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r0 = 1;
    r4 = (r4 * 56);
    r5 = (r5 + -23936);
}

loc_801F4330:
{
    r5 = (r5 + r4);
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(r3))) {
        goto loc_801F4348;
    }
}

loc_801F4338:
{
    r3 = MemoryInline::FlatRead32((r5 + 444));
    r4 = (r7 + r6);
}

loc_801F4344:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r3))) {
        goto loc_801F4354;
    }
}

loc_801F4348:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F4414;
}

loc_801F4354:
{
}

loc_801F4358:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801F4360;
    }
}

loc_801F435C:
{
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801F4360:
{
    r7 = MemoryInline::FlatRead32((r1 + 56));
    r6 = MemoryInline::FlatRead32((r1 + 60));
    r3 = (-1 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
}

loc_801F4370:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(r3))) {
        goto loc_801F4384;
    }
}

loc_801F4374:
{
    r3 = MemoryInline::FlatRead32((r5 + 444));
    r4 = (r7 + r6);
}

loc_801F4380:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r3))) {
        goto loc_801F4390;
    }
}

loc_801F4384:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F4414;
}

loc_801F4390:
{
}

loc_801F4394:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801F439C;
    }
}

loc_801F4398:
{
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801F439C:
{
    r7 = MemoryInline::FlatRead32((r1 + 76));
    r6 = MemoryInline::FlatRead32((r1 + 80));
    r3 = (-1 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
}

loc_801F43AC:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(r3))) {
        goto loc_801F43C0;
    }
}

loc_801F43B0:
{
    r3 = MemoryInline::FlatRead32((r5 + 444));
    r4 = (r7 + r6);
}

loc_801F43BC:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r3))) {
        goto loc_801F43CC;
    }
}

loc_801F43C0:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F4414;
}

loc_801F43CC:
{
}

loc_801F43D0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801F43D8;
    }
}

loc_801F43D4:
{
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801F43D8:
{
    r7 = MemoryInline::FlatRead32((r1 + 96));
    r6 = MemoryInline::FlatRead32((r1 + 100));
    r3 = (-1 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
}

loc_801F43E8:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(r3))) {
        goto loc_801F43FC;
    }
}

loc_801F43EC:
{
    r3 = MemoryInline::FlatRead32((r5 + 444));
    r4 = (r7 + r6);
}

loc_801F43F8:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r3))) {
        goto loc_801F4408;
    }
}

loc_801F43FC:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F4414;
}

loc_801F4408:
{
}

loc_801F440C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801F4414;
    }
}

loc_801F4410:
{
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801F4414:
{
    r0 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F441C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F447C;
    }
}

loc_801F4420:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F4428:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F447C;
    }
}

loc_801F442C:
{
    r0 = MemoryInline::FlatRead32((r1 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F4434:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F447C;
    }
}

loc_801F4438:
{
    r0 = MemoryInline::FlatRead32((r1 + 76));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F4440:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F447C;
    }
}

loc_801F4444:
{
    r0 = MemoryInline::FlatRead32((r1 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F444C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F447C;
    }
}

loc_801F4450:
{
    r3 = r30;
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F1014u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F4464:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F4474;
    }
}

loc_801F4468:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F447C;
}

loc_801F4474:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801F447C:
{
    r3 = 0;
}

loc_801F4480:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    r29 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F4280 func_801F4280 preserves=true fpr_mask=0x00000000
