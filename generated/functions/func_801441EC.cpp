#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801441EC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801441EC;

loc_801441EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80340000u;
    r31 = (r31 + -30144);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = (r31 + 52);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead8((r31 + 126));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014421C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801443E8;
    }
}

loc_80144220:
{
    r5 = MemoryInline::FlatRead16(r3);
}

loc_80144228:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80144338;
    }
}

loc_8014422C:
{
    r0 = MemoryInline::FlatRead8((r31 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80144234:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80144250;
    }
}

loc_80144238:
{
    r3 = 917504;
    r4 = 0x80280000u;
    r6 = (r29 + 4);
    r3 = (r3 + 3);
    r4 = (r4 + 19928);
    ctx->lr = 0x80144250u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80144250:
{
    r3 = (r30 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r5 = r3;
    r3 = (r30 + 8);
    r4 = (r29 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014426C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80144290;
    }
}

loc_80144270:
{
    r4 = MemoryInline::FlatRead32((r31 + 48));
    r3 = (r30 + 2);
    r5 = 6;
    r4 = (r4 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWriteRam16(r30, static_cast<uint16_t>(r0));
    goto loc_801443C0;
}

loc_80144290:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013C6D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014429C:
{
    MemoryInline::FlatWriteRam32((r31 + 48), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014432C;
    }
}

loc_801442A4:
{
    r4 = 0x80140000u;
    r3 = (r3 + 2);
    r4 = (r4 + 16876);
    ctx->lr = 0x801442B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013C3F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801442BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801443E8;
    }
}

loc_801442C0:
{
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 & 255);
}

loc_801442CC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_80144320;
    }
}

loc_801442D0:
{
    r3 = 0x80280000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 20092);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801442E8u:
        goto loc_801442E8;
        break;
    case 0x801442F0u:
        goto loc_801442F0;
        break;
    case 0x801442F8u:
        goto loc_801442F8;
        break;
    case 0x80144320u:
        goto loc_80144320;
        break;
    case 0x80144300u:
        goto loc_80144300;
        break;
    case 0x80144308u:
        goto loc_80144308;
        break;
    case 0x80144310u:
        goto loc_80144310;
        break;
    case 0x80144318u:
        goto loc_80144318;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_801442E8:
{
    r0 = 0;
    goto loc_80144324;
}

loc_801442F0:
{
    r0 = 267;
    goto loc_80144324;
}

loc_801442F8:
{
    r0 = 259;
    goto loc_80144324;
}

loc_80144300:
{
    r0 = 265;
    goto loc_80144324;
}

loc_80144308:
{
    r0 = 268;
    goto loc_80144324;
}

loc_80144310:
{
    r0 = 269;
    goto loc_80144324;
}

loc_80144318:
{
    r0 = 277;
    goto loc_80144324;
}

loc_80144320:
{
    r0 = 276;
}

loc_80144324:
{
    MemoryInline::FlatWriteRam16(r30, static_cast<uint16_t>(r0));
    goto loc_801443C0;
}

loc_8014432C:
{
    r0 = 258;
    MemoryInline::FlatWriteRam16(r30, static_cast<uint16_t>(r0));
    goto loc_801443C0;
}

loc_80144338:
{
    r0 = MemoryInline::FlatRead8((r31 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80144340:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80144358;
    }
}

loc_80144344:
{
    r3 = 917504;
    r4 = 0x80280000u;
    r3 = (r3 + 3);
    r4 = (r4 + 19996);
    ctx->lr = 0x80144358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80144358:
{
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 & 255);
}

loc_80144364:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_801443B8;
    }
}

loc_80144368:
{
    r3 = 0x80280000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + 20056);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80144380u:
        goto loc_80144380;
        break;
    case 0x80144388u:
        goto loc_80144388;
        break;
    case 0x80144390u:
        goto loc_80144390;
        break;
    case 0x801443B8u:
        goto loc_801443B8;
        break;
    case 0x80144398u:
        goto loc_80144398;
        break;
    case 0x801443A0u:
        goto loc_801443A0;
        break;
    case 0x801443A8u:
        goto loc_801443A8;
        break;
    case 0x801443B0u:
        goto loc_801443B0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80144380:
{
    r0 = 0;
    goto loc_801443BC;
}

loc_80144388:
{
    r0 = 267;
    goto loc_801443BC;
}

loc_80144390:
{
    r0 = 259;
    goto loc_801443BC;
}

loc_80144398:
{
    r0 = 265;
    goto loc_801443BC;
}

loc_801443A0:
{
    r0 = 268;
    goto loc_801443BC;
}

loc_801443A8:
{
    r0 = 269;
    goto loc_801443BC;
}

loc_801443B0:
{
    r0 = 277;
    goto loc_801443BC;
}

loc_801443B8:
{
    r0 = 276;
}

loc_801443BC:
{
    MemoryInline::FlatWriteRam16(r30, static_cast<uint16_t>(r0));
}

loc_801443C0:
{
    r12 = MemoryInline::FlatRead32((r31 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801443C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801443DC;
    }
}

loc_801443CC:
{
    r4 = r30;
    r3 = 5;
    ctr = r12;
    ctx->lr = 0x801443DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801443DC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 126), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r31 + 44), r0);
}

loc_801443E8:
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801441EC func_801441EC preserves=true fpr_mask=0x00000000
