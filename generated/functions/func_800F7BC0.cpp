#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F7BC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800F7BC0;

loc_800F7BC0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r31 = r6;
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r3 = r31;
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
    r4 = r31;
    ctr = r3;
}

loc_800F7BF8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800F7C30;
    }
}

loc_800F7BFC:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_800F7C04:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(32))) {
        goto loc_800F7C28;
    }
}

loc_800F7C08:
{
}

loc_800F7C0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_800F7C28;
    }
}

loc_800F7C10:
{
}

loc_800F7C14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_800F7C28;
    }
}

loc_800F7C18:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
}

loc_800F7C1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F7C28;
    }
}

loc_800F7C20:
{
    r3 = 0;
    goto loc_800F8288;
}

loc_800F7C28:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F7BFC;
    }
}

loc_800F7C30:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F7C3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F7C88;
    }
}

loc_800F7C40:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F7C50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F7C54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7C60;
    }
}

loc_800F7C58:
{
    r0 = 0;
    goto loc_800F7C78;
}

loc_800F7C60:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F7C68:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7C70;
    }
}

loc_800F7C6C:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F7C70:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F7C78:
{
}

loc_800F7C7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F7C88;
    }
}

loc_800F7C80:
{
    r5 = 0;
    goto loc_800F7CA8;
}

loc_800F7C88:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F7CA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F7CAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F7EF8;
    }
}

loc_800F7CB0:
{
    r3 = r29;
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
}

loc_800F7CBC:
{
    r27 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7D18;
    }
}

loc_800F7CC4:
{
    r3 = 1;
    goto loc_800F7D4C;
}

loc_800F7CD0:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F7CE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F7CE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7CF0;
    }
}

loc_800F7CE8:
{
    r0 = 0;
    goto loc_800F7D08;
}

loc_800F7CF0:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F7CF8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7D00;
    }
}

loc_800F7CFC:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F7D00:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F7D08:
{
}

loc_800F7D0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F7D18;
    }
}

loc_800F7D10:
{
    r3 = 0;
    goto loc_800F7D4C;
}

loc_800F7D18:
{
    r5 = MemoryInline::FlatRead32((r28 + 4));
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r27));
}

loc_800F7D28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F7CD0;
    }
}

loc_800F7D2C:
{
    r0 = MemoryInline::FlatRead32(r28);
    r4 = r29;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = 1;
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F7D4C:
{
}

loc_800F7D50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F7EF8;
    }
}

loc_800F7D54:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F7D60:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F7DAC;
    }
}

loc_800F7D64:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F7D74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F7D78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7D84;
    }
}

loc_800F7D7C:
{
    r0 = 0;
    goto loc_800F7D9C;
}

loc_800F7D84:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F7D8C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7D94;
    }
}

loc_800F7D90:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F7D94:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F7D9C:
{
}

loc_800F7DA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F7DAC;
    }
}

loc_800F7DA4:
{
    r5 = 0;
    goto loc_800F7DCC;
}

loc_800F7DAC:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F7DCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F7DD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F7EF8;
    }
}

loc_800F7DD4:
{
    r3 = r30;
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
}

loc_800F7DE0:
{
    r27 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7E3C;
    }
}

loc_800F7DE8:
{
    r3 = 1;
    goto loc_800F7E70;
}

loc_800F7DF4:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F7E04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F7E08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7E14;
    }
}

loc_800F7E0C:
{
    r0 = 0;
    goto loc_800F7E2C;
}

loc_800F7E14:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F7E1C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7E24;
    }
}

loc_800F7E20:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F7E24:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F7E2C:
{
}

loc_800F7E30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F7E3C;
    }
}

loc_800F7E34:
{
    r3 = 0;
    goto loc_800F7E70;
}

loc_800F7E3C:
{
    r5 = MemoryInline::FlatRead32((r28 + 4));
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r27));
}

loc_800F7E4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F7DF4;
    }
}

loc_800F7E50:
{
    r0 = MemoryInline::FlatRead32(r28);
    r4 = r30;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = 1;
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F7E70:
{
}

loc_800F7E74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F7EF8;
    }
}

loc_800F7E78:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F7E84:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F7ED0;
    }
}

loc_800F7E88:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r27;
    ctx->lr = 0x800F7E98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F7E9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7EA8;
    }
}

loc_800F7EA0:
{
    r0 = 0;
    goto loc_800F7EC0;
}

loc_800F7EA8:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F7EB0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7EB8;
    }
}

loc_800F7EB4:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F7EB8:
{
    MemoryInline::FlatWrite32((r28 + 8), r27);
    r0 = 1;
}

loc_800F7EC0:
{
}

loc_800F7EC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F7ED0;
    }
}

loc_800F7EC8:
{
    r5 = 0;
    goto loc_800F7EF0;
}

loc_800F7ED0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F7EF0:
{
}

loc_800F7EF4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800F7F00;
    }
}

loc_800F7EF8:
{
    r0 = 0;
    goto loc_800F7F04;
}

loc_800F7F00:
{
    r0 = 1;
}

loc_800F7F04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F7F08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F827C;
    }
}

loc_800F7F0C:
{
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x800F7F18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA774u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F7F1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F827C;
    }
}

loc_800F7F20:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F7F2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F7F78;
    }
}

loc_800F7F30:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F7F40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F7F44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7F50;
    }
}

loc_800F7F48:
{
    r0 = 0;
    goto loc_800F7F68;
}

loc_800F7F50:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F7F58:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7F60;
    }
}

loc_800F7F5C:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F7F60:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F7F68:
{
}

loc_800F7F6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F7F78;
    }
}

loc_800F7F70:
{
    r5 = 0;
    goto loc_800F7F98;
}

loc_800F7F78:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_9 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_9, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F7F98:
{
}

loc_800F7F9C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800F8268;
    }
}

loc_800F7FA0:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F7FAC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F7FF8;
    }
}

loc_800F7FB0:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F7FC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F7FC4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7FD0;
    }
}

loc_800F7FC8:
{
    r0 = 0;
    goto loc_800F7FE8;
}

loc_800F7FD0:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F7FD8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7FE0;
    }
}

loc_800F7FDC:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F7FE0:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F7FE8:
{
}

loc_800F7FEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F7FF8;
    }
}

loc_800F7FF0:
{
    r5 = 0;
    goto loc_800F8018;
}

loc_800F7FF8:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 47;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_11 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_11, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F8018:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F801C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F8268;
    }
}

loc_800F8020:
{
    r3 = r29;
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
}

loc_800F802C:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8088;
    }
}

loc_800F8034:
{
    r3 = 1;
    goto loc_800F80BC;
}

loc_800F8040:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F8050u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F8054:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8060;
    }
}

loc_800F8058:
{
    r0 = 0;
    goto loc_800F8078;
}

loc_800F8060:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F8068:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8070;
    }
}

loc_800F806C:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F8070:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F8078:
{
}

loc_800F807C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8088;
    }
}

loc_800F8080:
{
    r3 = 0;
    goto loc_800F80BC;
}

loc_800F8088:
{
    r5 = MemoryInline::FlatRead32((r28 + 4));
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r31));
}

loc_800F8098:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F8040;
    }
}

loc_800F809C:
{
    r0 = MemoryInline::FlatRead32(r28);
    r4 = r29;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = 1;
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F80BC:
{
}

loc_800F80C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F8268;
    }
}

loc_800F80C4:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F80D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F811C;
    }
}

loc_800F80D4:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F80E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F80E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F80F4;
    }
}

loc_800F80EC:
{
    r0 = 0;
    goto loc_800F810C;
}

loc_800F80F4:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F80FC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8104;
    }
}

loc_800F8100:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F8104:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F810C:
{
}

loc_800F8110:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F811C;
    }
}

loc_800F8114:
{
    r5 = 0;
    goto loc_800F813C;
}

loc_800F811C:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_13 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_13, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F813C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F8140:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F8268;
    }
}

loc_800F8144:
{
    r3 = r30;
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
}

loc_800F8150:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F81AC;
    }
}

loc_800F8158:
{
    r3 = 1;
    goto loc_800F81E0;
}

loc_800F8164:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F8174u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F8178:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8184;
    }
}

loc_800F817C:
{
    r0 = 0;
    goto loc_800F819C;
}

loc_800F8184:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F818C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8194;
    }
}

loc_800F8190:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F8194:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F819C:
{
}

loc_800F81A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F81AC;
    }
}

loc_800F81A4:
{
    r3 = 0;
    goto loc_800F81E0;
}

loc_800F81AC:
{
    r5 = MemoryInline::FlatRead32((r28 + 4));
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r29));
}

loc_800F81BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F8164;
    }
}

loc_800F81C0:
{
    r0 = MemoryInline::FlatRead32(r28);
    r4 = r30;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = 1;
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F81E0:
{
}

loc_800F81E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F8268;
    }
}

loc_800F81E8:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F81F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F8240;
    }
}

loc_800F81F8:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F8208u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F820C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8218;
    }
}

loc_800F8210:
{
    r0 = 0;
    goto loc_800F8230;
}

loc_800F8218:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F8220:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8228;
    }
}

loc_800F8224:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F8228:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F8230:
{
}

loc_800F8234:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8240;
    }
}

loc_800F8238:
{
    r5 = 0;
    goto loc_800F8260;
}

loc_800F8240:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_15 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_15, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F8260:
{
}

loc_800F8264:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800F8270;
    }
}

loc_800F8268:
{
    r0 = 0;
    goto loc_800F8274;
}

loc_800F8270:
{
    r0 = 1;
}

loc_800F8274:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F8278:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F8284;
    }
}

loc_800F827C:
{
    r3 = 0;
    goto loc_800F8288;
}

loc_800F8284:
{
    r3 = 1;
}

loc_800F8288:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F7BC0 func_800F7BC0 preserves=true fpr_mask=0x00000000
