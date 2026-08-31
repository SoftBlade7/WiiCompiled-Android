#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FC7D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800FC7D4;

loc_800FC7D4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0;
    r30 = r3;
    MemoryInline::FlatWrite32(r3, r31);
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r3 = 1588;
    ctx->lr = 0x800FC808u;
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
    InvokeDirectCpu<0x800F3860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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

loc_800FC80C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FC81C;
    }
}

loc_800FC814:
{
    r3 = 1;
    goto loc_800FC988;
}

loc_800FC81C:
{
    r4 = 0;
    r5 = 1588;
    ctx->lr = 0x800FC828u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    r0 = 1;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r31));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 1464), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 256), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 260), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 264), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 268), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 1544), r27);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 1548), r28);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 420), r29);
    ctx->lr = 0x800FC87Cu;
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
    InvokeDirectCpu<0x80105E94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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

loc_800FC880:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FC894;
    }
}

loc_800FC884:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x800FC88Cu;
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
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    goto loc_800FC988;
}

loc_800FC894:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    r3 = (r1 + 8);
    MemoryInline::FlatWrite32((r4 + 1472), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 424), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 428), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 432), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 436), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 440), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 444), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 448), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 452), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 456), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 460), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 464), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 468), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 472), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 476), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 480), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 484), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 488), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 492), r31);
    ctx->lr = 0x800FC934u;
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
    InvokeDirectCpu<0x800FCA1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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

loc_800FC938:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FC970;
    }
}

loc_800FC940:
{
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = 1;
    ctx->lr = 0x800FC950u;
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
    InvokeDirectCpu<0x801012B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    ctx->lr = 0x800FC958u;
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
    InvokeDirectCpu<0x801039C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 1480));
    ctx->lr = 0x800FC960u;
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
    InvokeDirectCpu<0x800EFE8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x800FC968u;
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
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    goto loc_800FC988;
}

loc_800FC970:
{
    // inline leaf 0x800F24C0 (1 guest instruction(s))
    // end of inlined leaf 0x800F24C0
    ctx->lr = 0x800FC978u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    // inline leaf 0x80011C90 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -32712), r3);
    // end of inlined leaf 0x80011C90
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = 0;
    MemoryInline::FlatWrite32(r30, r0);
}

loc_800FC988:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
// RECOMP_REGISTRATION base 0x800FC7D4 func_800FC7D4 preserves=true fpr_mask=0x00000000
