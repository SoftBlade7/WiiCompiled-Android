#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B3BAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B3BAC;

loc_801B3BAC:
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B3BC4:
{
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3E18;
    }
}

loc_801B3BDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801B3BE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3E20;
    }
}

loc_801B3BE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801B3BE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3E20;
    }
}

loc_801B3BEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801B3BF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3E20;
    }
}

loc_801B3BF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801B3BF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3E28;
    }
}

loc_801B3BFC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8012E630u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 268435456);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B3C04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3E48;
    }
}

loc_801B3C08:
{
    r0 = MemoryInline::FlatRead32((r13 + -25088));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B3C10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3E50;
    }
}

loc_801B3C14:
{
    r0 = (r30 + 31);
    r4 = 1724;
    r3 = (r0 & -32);
    r0 = (r3 + 1724);
    MemoryInline::FlatWrite32((r13 + -25084), r3);
    MemoryInline::FlatWrite32((r13 + -25080), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A16E4u>(ctx);
    r3 = MemoryInline::FlatRead32((r13 + -25084));
    r4 = 33;
    r0 = 0;
    r30 = 0;
    MemoryInline::FlatWrite32((r3 + 1700), r4);
    r31 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -25084));
    MemoryInline::FlatWrite16((r3 + 1688), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -25084));
    MemoryInline::FlatWrite32((r3 + 1692), r26);
}

loc_801B3C58:
{
    r4 = MemoryInline::FlatRead32((r13 + -25084));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_801B3C70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3E38;
    }
}

loc_801B3C74:
{
    goto loc_801B3C84;
}

loc_801B3C78:
{
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
}

loc_801B3C84:
{
    r4 = MemoryInline::FlatRead32((r13 + -25084));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801B3C94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801B3C78;
    }
}

loc_801B3C98:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801B3CA8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(215))) {
        goto loc_801B3CDC;
    }
}

loc_801B3CAC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(196));
}

loc_801B3CB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3CC4;
    }
}

loc_801B3CB4:
{
    ctx->lr = 0x801B3CB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B444Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B3CBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3E40;
    }
}

loc_801B3CC0:
{
    goto loc_801B3DB8;
}

loc_801B3CC4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(192));
}

loc_801B3CC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3E30;
    }
}

loc_801B3CCC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B3E6Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B3CD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3E40;
    }
}

loc_801B3CD8:
{
    goto loc_801B3DB8;
}

loc_801B3CDC:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r0), static_cast<uint32_t>(216));
}

loc_801B3CE0:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801B3D80;
    }
}

loc_801B3CE4:
{
}

loc_801B3CE8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(223))) {
        goto loc_801B3D80;
    }
}

loc_801B3CEC:
{
}

loc_801B3CF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(221))) {
        goto loc_801B3D44;
    }
}

loc_801B3CF4:
{
    r3 = MemoryInline::FlatRead32((r13 + -25084));
    MemoryInline::FlatWrite8((r3 + 1705), static_cast<uint8_t>(r31));
    r4 = MemoryInline::FlatRead32((r13 + -25084));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r5 = MemoryInline::FlatRead32((r13 + -25084));
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_2 & 65280);
    r0_mdest_2 = (r0 & -65281);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite16((r5 + 1706), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -25084));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25084));
    r0 = MemoryInline::FlatRead16((r3 + 1706));
    MemoryInline::FlatWrite16((r3 + 1708), static_cast<uint16_t>(r0));
    goto loc_801B3DB8;
}

loc_801B3D44:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(219));
}

loc_801B3D48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3D5C;
    }
}

loc_801B3D4C:
{
    ctx->lr = 0x801B3D50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B40B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B3D54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3E40;
    }
}

loc_801B3D58:
{
    goto loc_801B3DB8;
}

loc_801B3D5C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(218));
}

loc_801B3D60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3D78;
    }
}

loc_801B3D64:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B3FA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B3D6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3E40;
    }
}

loc_801B3D70:
{
    r30 = 1;
    goto loc_801B3DB8;
}

loc_801B3D78:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801B3DB8;
    }
}

loc_801B3D7C:
{
    goto loc_801B3E30;
}

loc_801B3D80:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(224));
}

loc_801B3D84:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801B3DB8;
    }
}

loc_801B3D88:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801B3D94;
    }
}

loc_801B3D8C:
{
}

loc_801B3D90:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(239))) {
        goto loc_801B3D9C;
    }
}

loc_801B3D94:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(254));
}

loc_801B3D98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3E30;
    }
}

loc_801B3D9C:
{
    r4 = MemoryInline::FlatRead32((r13 + -25084));
    r5 = MemoryInline::FlatRead32((r4 + 1692));
    r3 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_3 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
}

loc_801B3DB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801B3DBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3C58;
    }
}

loc_801B3DC0:
{
    r4 = MemoryInline::FlatRead32((r13 + -25080));
    r6 = 0x80350000u;
    r9 = (r6 + 1568);
    r3 = r27;
    r0 = (r4 + 31);
    r4 = r28;
    r11 = (r0 & -32);
    r5 = r29;
    r10 = (r11 + 128);
    MemoryInline::FlatWriteRam32((r6 + 1568), r11);
    r8 = (r11 + 256);
    r7 = (r11 + 384);
    r6 = (r11 + 512);
    r0 = (r11 + 640);
    MemoryInline::FlatWriteRam32((r9 + 4), r10);
    MemoryInline::FlatWriteRam32((r9 + 8), r8);
    MemoryInline::FlatWriteRam32((r9 + 12), r7);
    MemoryInline::FlatWriteRam32((r9 + 16), r6);
    MemoryInline::FlatWriteRam32((r9 + 20), r0);
    ctx->lr = 0x801B3E10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B4A58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_801B3E54;
}

loc_801B3E18:
{
    r3 = 25;
    goto loc_801B3E54;
}

loc_801B3E20:
{
    r3 = 27;
    goto loc_801B3E54;
}

loc_801B3E28:
{
    r3 = 26;
    goto loc_801B3E54;
}

loc_801B3E30:
{
    r3 = 11;
    goto loc_801B3E54;
}

loc_801B3E38:
{
    r3 = 3;
    goto loc_801B3E54;
}

loc_801B3E40:
{
    r3 = (r3 & 255);
    goto loc_801B3E54;
}

loc_801B3E48:
{
    r3 = 28;
    goto loc_801B3E54;
}

loc_801B3E50:
{
    r3 = 29;
}

loc_801B3E54:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC03FFF gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0xFE003FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B3BAC func_801B3BAC preserves=true fpr_mask=0x00000000
