#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806732C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806732C8;

loc_806732C8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r3 = 65536;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = (r3 + -27664);
    MemoryInline::FlatWriteRam32((r1 + 28), r27);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r30 = r4;
    r28 = (r5 * r0);
    r29 = 0x809C0000u;
    r3 = r30;
    r4 = 0;
    r5 = 1072;
    r0 = MemoryInline::FlatRead32((r29 + -10424));
    r6 = (r0 + r28);
    r31 = (r6 + 56);
    ctx->lr = 0x80673308u;
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
    r0 = MemoryInline::FlatRead32((r29 + -10424));
    r4 = (r1 + 8);
    r3 = (r0 + r28);
    r29 = (r3 + 78);
    r3 = r29;
    ctx->lr = 0x80673320u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C75F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80673324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673340;
    }
}

loc_80673328:
{
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r30 + 968);
    r4 = 0;
    ctx->lr = 0x80673338u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    goto loc_80673370;
}

loc_80673340:
{
    r3 = r29;
    r4 = (r1 + 8);
    ctx->lr = 0x8067334Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80673350:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067336C;
    }
}

loc_80673354:
{
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r30 + 968);
    r4 = 6;
    ctx->lr = 0x80673364u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    goto loc_80673370;
}

loc_8067336C:
{
    r0 = 0;
}

loc_80673370:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80673374:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80673380;
    }
}

loc_80673378:
{
    r3 = 0;
    goto loc_80673554;
}

loc_80673380:
{
    r28 = r30;
    r27 = 0;
    r29 = 0;
}

loc_8067338C:
{
    r3 = r31;
    r5 = r27;
    r4 = 0;
    ctx->lr = 0x8067339Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80548E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 80), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 86));
}

loc_806733A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806733E4;
    }
}

loc_806733A8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 80));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 82));
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 84));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 86));
    MemoryInline::FlatWrite8((r28 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 88));
    MemoryInline::FlatWrite32((r28 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 92));
    MemoryInline::FlatWrite32((r28 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 96));
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_806733E8;
}

loc_806733E4:
{
    MemoryInline::FlatWrite8((r28 + 10), static_cast<uint8_t>(r29));
}

loc_806733E8:
{
    r27 = (r27 + 1);
    r28 = (r28 + 24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(32));
}

loc_806733F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067338C;
    }
}

loc_806733F8:
{
    r0 = 5;
    r7 = r30;
    r6 = (r31 + 65536);
    r8 = 0;
    r4 = -1;
    r3 = 0;
    ctr = r0;
}

loc_80673414:
{
    r0 = (r8 & 65535);
    r0 = (r0 * 20);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r5 + -28270));
}

loc_80673428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80673460;
    }
}

loc_8067342C:
{
    r0 = MemoryInline::FlatRead32((r5 + -28268));
    MemoryInline::FlatWrite32((r7 + 768), r0);
    r0 = MemoryInline::FlatRead16((r5 + -28276));
    MemoryInline::FlatWrite16((r7 + 776), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + -28274));
    MemoryInline::FlatWrite8((r7 + 778), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + -28272));
    MemoryInline::FlatWrite16((r7 + 780), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + -28270));
    MemoryInline::FlatWrite8((r7 + 782), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + -28264));
    MemoryInline::FlatWrite32((r7 + 784), r0);
    goto loc_8067346C;
}

loc_80673460:
{
    MemoryInline::FlatWrite32((r7 + 768), r4);
    MemoryInline::FlatWrite8((r7 + 782), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r7 + 784), r4);
}

loc_8067346C:
{
    r8 = (r8 + 1);
    r0 = (r8 & 65535);
    r0 = (r0 * 20);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r5 + -28270));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80673484:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806734BC;
    }
}

loc_80673488:
{
    r0 = MemoryInline::FlatRead32((r5 + -28268));
    MemoryInline::FlatWrite32((r7 + 788), r0);
    r0 = MemoryInline::FlatRead16((r5 + -28276));
    MemoryInline::FlatWrite16((r7 + 796), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + -28274));
    MemoryInline::FlatWrite8((r7 + 798), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + -28272));
    MemoryInline::FlatWrite16((r7 + 800), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + -28270));
    MemoryInline::FlatWrite8((r7 + 802), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + -28264));
    MemoryInline::FlatWrite32((r7 + 804), r0);
    goto loc_806734C8;
}

loc_806734BC:
{
    MemoryInline::FlatWrite32((r7 + 788), r4);
    MemoryInline::FlatWrite8((r7 + 802), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r7 + 804), r4);
}

loc_806734C8:
{
    r7 = (r7 + 40);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80673414;
    }
}

loc_806734D4:
{
    r3 = (r31 + 65536);
    r3 = (r3 + -28744);
    ctx->lr = 0x806734E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800EC6BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r4 | r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWrite32((r30 + 1052), r4);
    MemoryInline::FlatWrite32((r30 + 1048), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806734F8;
    }
}

loc_806734F0:
{
    r3 = 0;
    goto loc_80673554;
}

loc_806734F8:
{
    r3 = 0x809C0000u;
    r4 = (r1 + 12);
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054A9B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8067350C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673518;
    }
}

loc_80673510:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    goto loc_8067351C;
}

loc_80673518:
{
    r0 = 0;
}

loc_8067351C:
{
    MemoryInline::FlatWrite32((r30 + 1056), r0);
    r29 = 0x809C0000u;
    r4 = (r30 + 1060);
    r3 = MemoryInline::FlatRead32((r29 + -10424));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054A9E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + -10424));
    r4 = (r30 + 1062);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054AA08u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = (r31 + 65536);
    r3 = 1;
    r0 = MemoryInline::FlatRead16((r4 + -28648));
    MemoryInline::FlatWrite16((r30 + 1064), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + -28640));
    MemoryInline::FlatWrite16((r30 + 1066), static_cast<uint16_t>(r0));
}

loc_80673554:
{
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80023FB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806732C8 func_806732C8 preserves=true fpr_mask=0x00000000
