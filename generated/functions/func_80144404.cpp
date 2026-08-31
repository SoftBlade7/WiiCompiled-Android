#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80144404(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80144404;

loc_80144404:
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

loc_80144434:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014459C;
    }
}

loc_80144438:
{
    r0 = MemoryInline::FlatRead8((r31 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80144440:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80144460;
    }
}

loc_80144444:
{
    r3 = 917504;
    r4 = 0x80280000u;
    r5 = MemoryInline::FlatRead8(r29);
    r3 = (r3 + 3);
    r6 = MemoryInline::FlatRead8((r29 + 1));
    r4 = (r4 + 20128);
    ctx->lr = 0x80144460u;
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

loc_80144460:
{
    r0 = MemoryInline::FlatRead8(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80144468:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80144514;
    }
}

loc_8014446C:
{
    r0 = 273;
    MemoryInline::FlatWriteRam16(r30, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013C618u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014447C:
{
    MemoryInline::FlatWriteRam32((r31 + 48), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80144508;
    }
}

loc_80144484:
{
    r4 = 0x80140000u;
    r3 = (r3 + 2);
    r4 = (r4 + 16876);
    ctx->lr = 0x80144494u;
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

loc_8014449C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014459C;
    }
}

loc_801444A0:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_801444A8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_801444FC;
    }
}

loc_801444AC:
{
    r3 = 0x80280000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 20232);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801444C4u:
        goto loc_801444C4;
        break;
    case 0x801444CCu:
        goto loc_801444CC;
        break;
    case 0x801444D4u:
        goto loc_801444D4;
        break;
    case 0x801444FCu:
        goto loc_801444FC;
        break;
    case 0x801444DCu:
        goto loc_801444DC;
        break;
    case 0x801444E4u:
        goto loc_801444E4;
        break;
    case 0x801444ECu:
        goto loc_801444EC;
        break;
    case 0x801444F4u:
        goto loc_801444F4;
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

loc_801444C4:
{
    r0 = 0;
    goto loc_80144500;
}

loc_801444CC:
{
    r0 = 267;
    goto loc_80144500;
}

loc_801444D4:
{
    r0 = 259;
    goto loc_80144500;
}

loc_801444DC:
{
    r0 = 265;
    goto loc_80144500;
}

loc_801444E4:
{
    r0 = 268;
    goto loc_80144500;
}

loc_801444EC:
{
    r0 = 269;
    goto loc_80144500;
}

loc_801444F4:
{
    r0 = 277;
    goto loc_80144500;
}

loc_801444FC:
{
    r0 = 276;
}

loc_80144500:
{
    MemoryInline::FlatWriteRam16(r30, static_cast<uint16_t>(r0));
    goto loc_80144574;
}

loc_80144508:
{
    r0 = 258;
    MemoryInline::FlatWriteRam16(r30, static_cast<uint16_t>(r0));
    goto loc_80144574;
}

loc_80144514:
{
}

loc_80144518:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_8014456C;
    }
}

loc_8014451C:
{
    r3 = 0x80280000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + 20196);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80144534u:
        goto loc_80144534;
        break;
    case 0x8014453Cu:
        goto loc_8014453C;
        break;
    case 0x80144544u:
        goto loc_80144544;
        break;
    case 0x8014456Cu:
        goto loc_8014456C;
        break;
    case 0x8014454Cu:
        goto loc_8014454C;
        break;
    case 0x80144554u:
        goto loc_80144554;
        break;
    case 0x8014455Cu:
        goto loc_8014455C;
        break;
    case 0x80144564u:
        goto loc_80144564;
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

loc_80144534:
{
    r0 = 0;
    goto loc_80144570;
}

loc_8014453C:
{
    r0 = 267;
    goto loc_80144570;
}

loc_80144544:
{
    r0 = 259;
    goto loc_80144570;
}

loc_8014454C:
{
    r0 = 265;
    goto loc_80144570;
}

loc_80144554:
{
    r0 = 268;
    goto loc_80144570;
}

loc_8014455C:
{
    r0 = 269;
    goto loc_80144570;
}

loc_80144564:
{
    r0 = 277;
    goto loc_80144570;
}

loc_8014456C:
{
    r0 = 276;
}

loc_80144570:
{
    MemoryInline::FlatWriteRam16(r30, static_cast<uint16_t>(r0));
}

loc_80144574:
{
    r12 = MemoryInline::FlatRead32((r31 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8014457C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80144590;
    }
}

loc_80144580:
{
    r4 = r30;
    r3 = 5;
    ctr = r12;
    ctx->lr = 0x80144590u;
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

loc_80144590:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 126), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r31 + 44), r0);
}

loc_8014459C:
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
// RECOMP_REGISTRATION base 0x80144404 func_80144404 preserves=true fpr_mask=0x00000000
