#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DD044(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DD044;

loc_801DD044:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead32((r13 + -24380));
    r4 = 0;
    MemoryInline::FlatWrite32((r13 + -24372), r4);
    r27 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801DD06C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD078;
    }
}

loc_801DD070:
{
    r31 = -9;
    goto loc_801DD204;
}

loc_801DD078:
{
    r31 = -39;
}

loc_801DD07C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801B0220u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801DD084:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801DD07C;
    }
}

loc_801DD088:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_801DD08C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD0A0;
    }
}

loc_801DD090:
{
    r3 = -131072;
    r0 = (r3 + 21960);
    MemoryInline::FlatWrite32((r13 + -24372), r0);
    goto loc_801DD204;
}

loc_801DD0A0:
{
    ctx->lr = 0x801DD0A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B21A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r3 & 1);
    ctx->lr = 0x801DD0ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B216Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r3;
    ctx->lr = 0x801DD0B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B2130u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r3 & 2);
    r3 = (r1 + 28);
    ctx->lr = 0x801DD0C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B1D78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801DD0C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD0D8;
    }
}

loc_801DD0C8:
{
    r3 = -131072;
    r0 = (r3 + 21933);
    MemoryInline::FlatWrite32((r13 + -24372), r0);
    goto loc_801DD204;
}

loc_801DD0D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801DD0DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD0F0;
    }
}

loc_801DD0E0:
{
    r3 = -131072;
    r0 = (r3 + 21965);
    MemoryInline::FlatWrite32((r13 + -24372), r0);
    goto loc_801DD204;
}

loc_801DD0F0:
{
    r0 = MemoryInline::FlatRead8((r1 + 28));
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DD0F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD118;
    }
}

loc_801DD0FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801DD100:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD118;
    }
}

loc_801DD104:
{
    r3 = -131072;
    r31 = -7;
    r0 = (r3 + 21965);
    MemoryInline::FlatWrite32((r13 + -24372), r0);
    goto loc_801DD204;
}

loc_801DD118:
{
    r3 = (r1 + 24);
    r4 = (r1 + 20);
    r5 = (r1 + 16);
    r31 = -31;
    ctx->lr = 0x801DD12Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D0E98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DD130:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD144;
    }
}

loc_801DD134:
{
    r3 = -131072;
    r0 = (r3 + 21939);
    MemoryInline::FlatWrite32((r13 + -24372), r0);
    goto loc_801DD204;
}

loc_801DD144:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_801DD14C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DD178;
    }
}

loc_801DD150:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_801DD158:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DD178;
    }
}

loc_801DD15C:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DD164:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD178;
    }
}

loc_801DD168:
{
    r3 = -65536;
    r0 = (r3 + 15237);
    MemoryInline::FlatWrite32((r13 + -24372), r0);
    goto loc_801DD204;
}

loc_801DD178:
{
    r30 = (r27 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801DD17C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD1A4;
    }
}

loc_801DD180:
{
    r3 = (r1 + 12);
    // inline leaf 0x801DC8AC (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -24392));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWriteRam32(r3, r0);
    r3 = 0;
    // end of inlined leaf 0x801DC8AC
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801DD190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD1A4;
    }
}

loc_801DD194:
{
    r3 = -131072;
    r0 = (r3 + 21928);
    MemoryInline::FlatWrite32((r13 + -24372), r0);
    goto loc_801DD204;
}

loc_801DD1A4:
{
    r0 = 0;
    r4 = r27;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    ctx->lr = 0x801DD1B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DD230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DD1BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD1D0;
    }
}

loc_801DD1C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r31 = r3;
    MemoryInline::FlatWrite32((r13 + -24372), r0);
    goto loc_801DD204;
}

loc_801DD1D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801DD1D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD200;
    }
}

loc_801DD1D8:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x801DD1E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DF5F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-6));
}

loc_801DD1E8:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DD200;
    }
}

loc_801DD1F0:
{
    r3 = -131072;
    r0 = (r3 + 21966);
    MemoryInline::FlatWrite32((r13 + -24372), r0);
    goto loc_801DD204;
}

loc_801DD200:
{
    r31 = 0;
}

loc_801DD204:
{
    r11 = (r1 + 128);
    r3 = r31;
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DD044 func_801DD044 preserves=true fpr_mask=0x00000000
