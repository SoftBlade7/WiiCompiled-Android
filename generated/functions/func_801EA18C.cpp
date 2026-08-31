#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EA18C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EA18C;

loc_801EA18C:
{
    MemoryInline::FlatWriteRam32((r1 + -720), r1);
    r1 = (r1 + -720);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 24;
    MemoryInline::FlatWriteRam32((r1 + 724), r0);
    r3 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 716), r31);
    MemoryInline::FlatWriteRam32((r1 + 712), r30);
    ctx->lr = 0x801EA1B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0;
    r5 = 0x80000000u;
    r0 = 1;
    r3 = -1;
    r6 = (r5 + -1);
    r5 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801EA1CC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA21C;
    }
}

loc_801EA1E8:
{
    r3 = 0;
    goto loc_801EA450;
}

loc_801EA1F4:
{
    r4 = MemoryInline::FlatRead32((r13 + -24384));
    r5 = MemoryInline::FlatRead16((r1 + 8));
}

loc_801EA200:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA20C;
    }
}

loc_801EA204:
{
    r4 = (r4 + 13824);
    goto loc_801EA210;
}

loc_801EA20C:
{
    r4 = 0;
}

loc_801EA210:
{
    r0 = MemoryInline::FlatRead16((r4 + 18));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_801EA218:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA230;
    }
}

loc_801EA21C:
{
    r3 = (r1 + 16);
    r4 = (r1 + 8);
    ctx->lr = 0x801EA228u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E9B1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EA22C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EA1F4;
    }
}

loc_801EA230:
{
}

loc_801EA234:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_801EA444;
    }
}

loc_801EA238:
{
    r4 = MemoryInline::FlatRead32((r13 + -24384));
    r30 = (r1 + 200);
    r31 = MemoryInline::FlatRead16((r1 + 8));
}

loc_801EA248:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA254;
    }
}

loc_801EA24C:
{
    r0 = (r4 + 13824);
    goto loc_801EA258;
}

loc_801EA254:
{
    r0 = 0;
}

loc_801EA258:
{
}

loc_801EA25C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EA268;
    }
}

loc_801EA260:
{
    r3 = -9;
    goto loc_801EA37C;
}

loc_801EA268:
{
}

loc_801EA26C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA278;
    }
}

loc_801EA270:
{
    r3 = (r4 + 13824);
    goto loc_801EA27C;
}

loc_801EA278:
{
    r3 = 0;
}

loc_801EA27C:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EA284:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0))) {
        goto loc_801EA290;
    }
}

loc_801EA288:
{
}

loc_801EA28C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(65535))) {
        goto loc_801EA298;
    }
}

loc_801EA290:
{
    r3 = -3;
    goto loc_801EA2C8;
}

loc_801EA298:
{
}

loc_801EA29C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA2A8;
    }
}

loc_801EA2A0:
{
    r4 = (r4 + 13824);
    goto loc_801EA2AC;
}

loc_801EA2A8:
{
    r4 = 0;
}

loc_801EA2AC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 1048560);
    r3 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_801EA2C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EA2C8;
    }
}

loc_801EA2C4:
{
    r3 = -13;
}

loc_801EA2C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA2CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA2D4;
    }
}

loc_801EA2D0:
{
    goto loc_801EA37C;
}

loc_801EA2D4:
{
    r4 = MemoryInline::FlatRead32((r13 + -27976));
    r3 = (r1 + 40);
    r5 = 10;
    ctx->lr = 0x801EA2E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAC68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EA2E8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801EA2F0;
    }
}

loc_801EA2EC:
{
    goto loc_801EA37C;
}

loc_801EA2F0:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801EA2F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EA304;
    }
}

loc_801EA2FC:
{
    r3 = (r3 + 13824);
    goto loc_801EA308;
}

loc_801EA304:
{
    r3 = 0;
}

loc_801EA308:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EA310:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(120))) {
        goto loc_801EA31C;
    }
}

loc_801EA314:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_801EA318:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EA324;
    }
}

loc_801EA31C:
{
    r3 = -3;
    goto loc_801EA338;
}

loc_801EA324:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(9));
    r4 = (r4_rot_1 & 33553920);
    r3 = (r1 + 40);
    r4 = (r4 + 2048);
    r5 = 0;
    ctx->lr = 0x801EA338u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EA338:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA33C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA348;
    }
}

loc_801EA340:
{
    r31 = r3;
    goto loc_801EA368;
}

loc_801EA348:
{
    r3 = r30;
    r5 = (r1 + 40);
    r4 = 512;
    ctx->lr = 0x801EA358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB344u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA35C:
{
    r31 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA368;
    }
}

loc_801EA364:
{
    r31 = r3;
}

loc_801EA368:
{
    r3 = (r1 + 40);
    ctx->lr = 0x801EA370u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAFBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EA374:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801EA37C;
    }
}

loc_801EA378:
{
    r3 = r31;
}

loc_801EA37C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA380:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA388;
    }
}

loc_801EA384:
{
    goto loc_801EA450;
}

loc_801EA388:
{
    r30 = (r1 + 200);
    r4 = 0;
    r3 = r30;
    ctx->lr = 0x801EA398u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E8CF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EA39C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EA3A4;
    }
}

loc_801EA3A0:
{
    goto loc_801EA438;
}

loc_801EA3A4:
{
    r4 = MemoryInline::FlatRead32((r13 + -24384));
    r5 = MemoryInline::FlatRead16((r1 + 200));
}

loc_801EA3B0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA3BC;
    }
}

loc_801EA3B4:
{
    r3 = (r4 + 13824);
    goto loc_801EA3C0;
}

loc_801EA3BC:
{
    r3 = 0;
}

loc_801EA3C0:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EA3C8:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_801EA3D4;
    }
}

loc_801EA3CC:
{
}

loc_801EA3D0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(65535))) {
        goto loc_801EA3DC;
    }
}

loc_801EA3D4:
{
    r3 = -3;
    goto loc_801EA40C;
}

loc_801EA3DC:
{
}

loc_801EA3E0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA3EC;
    }
}

loc_801EA3E4:
{
    r4 = (r4 + 13824);
    goto loc_801EA3F0;
}

loc_801EA3EC:
{
    r4 = 0;
}

loc_801EA3F0:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 1048560);
    r3 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_801EA404:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EA40C;
    }
}

loc_801EA408:
{
    r3 = -13;
}

loc_801EA40C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA410:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA418;
    }
}

loc_801EA414:
{
    goto loc_801EA438;
}

loc_801EA418:
{
    r3 = r30;
    ctx->lr = 0x801EA420u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EB644u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EA424:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801EA42C;
    }
}

loc_801EA428:
{
    goto loc_801EA438;
}

loc_801EA42C:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWriteRam16((r1 + 200), static_cast<uint16_t>(r0));
}

loc_801EA438:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA43C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA450;
    }
}

loc_801EA440:
{
    goto loc_801EA450;
}

loc_801EA444:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801EA448:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EA450;
    }
}

loc_801EA44C:
{
    r3 = -2;
}

loc_801EA450:
{
    r0 = MemoryInline::FlatRead32((r1 + 724));
    r31 = MemoryInline::FlatRead32((r1 + 716));
    r30 = MemoryInline::FlatRead32((r1 + 712));
    ctx->lr = r0;
    r1 = (r1 + 720);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801EA18C func_801EA18C preserves=true fpr_mask=0x00000000
