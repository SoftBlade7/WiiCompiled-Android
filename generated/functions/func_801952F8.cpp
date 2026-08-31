#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801952F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801952F8;

loc_801952F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80195300:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80195310;
    }
}

loc_80195304:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8019530C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80195348;
    }
}

loc_80195310:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r7 = 0;
    r6 = MemoryInline::FlatRead16((r3 + 1232));
}

loc_80195320:
{
    MemoryInline::FlatWrite16((r3 + 1228), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 1230), static_cast<uint16_t>(r6));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801953BC;
    }
}

loc_8019532C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1234));
}

loc_80195334:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801953BC;
    }
}

loc_80195338:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_801953BC;
}

loc_80195348:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80195350:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801953BC;
    }
}

loc_80195354:
{
    r0 = MemoryInline::FlatRead16((r3 + 1228));
    r0 = (r0 + r5);
    r6 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 1228), static_cast<uint16_t>(r0));
}

loc_80195368:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(40000))) {
        goto loc_80195378;
    }
}

loc_8019536C:
{
    r6 = (r6 + -65536);
    r0 = (r6 + 25536);
    MemoryInline::FlatWrite16((r3 + 1228), static_cast<uint16_t>(r0));
}

loc_80195378:
{
    r8 = MemoryInline::FlatRead16((r3 + 1228));
    r7 = MemoryInline::FlatRead16((r3 + 1230));
}

loc_80195384:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r7))) {
        goto loc_801953BC;
    }
}

loc_80195388:
{
    r6 = MemoryInline::FlatRead32(r3);
}

loc_80195390:
{
    r0 = MemoryInline::FlatRead16((r3 + 1234));
    r6 = (r6 | -2147483648);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32(r3, r6);
    MemoryInline::FlatWrite16((r3 + 1230), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(20000))) {
        goto loc_801953BC;
    }
}

loc_801953A8:
{
    r6 = (r0 & 65535);
    r7 = (r8 + -20000);
    r0 = (r6 + -20000);
    MemoryInline::FlatWrite16((r3 + 1228), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 1230), static_cast<uint16_t>(r0));
}

loc_801953BC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
}

loc_801953C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_801953C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 100));
}

loc_801953CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801953DC;
    }
}

loc_801953D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 104));
}

loc_801953D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80195414;
    }
}

loc_801953DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 100));
    r5 = 0;
    r4 = MemoryInline::FlatRead16((r3 + 1232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801953EC:
{
    MemoryInline::FlatWrite16((r3 + 1236), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 1238), static_cast<uint16_t>(r4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801953F8:
{
    r0 = MemoryInline::FlatRead16((r3 + 1234));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80195400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80195404:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80195414:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019541C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80195420:
{
    r0 = MemoryInline::FlatRead16((r3 + 1236));
    r0 = (r0 + r5);
    r4 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 1236), static_cast<uint16_t>(r0));
}

loc_80195434:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(40000))) {
        goto loc_80195444;
    }
}

loc_80195438:
{
    r4 = (r4 + -65536);
    r0 = (r4 + 25536);
    MemoryInline::FlatWrite16((r3 + 1236), static_cast<uint16_t>(r0));
}

loc_80195444:
{
    r6 = MemoryInline::FlatRead16((r3 + 1236));
    r5 = MemoryInline::FlatRead16((r3 + 1238));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_80195450:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80195454:
{
    r4 = MemoryInline::FlatRead32((r3 + 96));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(20000));
}

loc_8019545C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1234));
    r4 = (r4 | -2147483648);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 96), r4);
    MemoryInline::FlatWrite16((r3 + 1238), static_cast<uint16_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80195474:
{
    r4 = (r0 & 65535);
    r5 = (r6 + -20000);
    r0 = (r4 + -20000);
    MemoryInline::FlatWrite16((r3 + 1236), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 1238), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801952F8 func_801952F8 preserves=true fpr_mask=0x00000000
