#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A6FFC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A6FFC;

loc_801A6FFC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r6 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::FlatWrite8((r3 + 51), static_cast<uint8_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
}

loc_801A7034:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801A7078;
    }
}

loc_801A7038:
{
}

loc_801A703C:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(2))) {
        goto loc_801A7080;
    }
}

loc_801A7040:
{
    r5 = MemoryInline::FlatRead32((r3 + 64));
}

loc_801A7048:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801A705C;
    }
}

loc_801A704C:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r0 = (r0 * r5);
    r0 = (r3 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A7078;
    }
}

loc_801A705C:
{
    r5 = MemoryInline::FlatRead32((r3 + 68));
}

loc_801A7064:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801A7080;
    }
}

loc_801A7068:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A7080;
    }
}

loc_801A7078:
{
    r3 = 0;
    goto loc_801A72BC;
}

loc_801A7080:
{
    r5 = 0x80000000u;
    r6 = MemoryInline::FlatRead32((r5 + 12492));
}

loc_801A708C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801A7098;
    }
}

loc_801A7090:
{
    MemoryInline::FlatWriteRam32((r5 + 12488), r3);
    goto loc_801A709C;
}

loc_801A7098:
{
    MemoryInline::FlatWrite32((r6 + 4), r3);
}

loc_801A709C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r6);
    r5 = 0x80000000u;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r5 + 12492), r3);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r6 = MemoryInline::FlatRead32((r3 + 36));
    r7 = (r0 + r3);
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r6 = (r6 + r3);
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r3 + 16), r7);
}

loc_801A70D4:
{
    MemoryInline::FlatWrite32((r3 + 36), r6);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_801A70EC;
    }
}

loc_801A70E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r3 + 72), r0);
}

loc_801A70EC:
{
    r6 = 1;
    r5 = 8;
    goto loc_801A7134;
}

loc_801A70F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r7 = (r0 + r5);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_2);
}

loc_801A7108:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A7118;
    }
}

loc_801A710C:
{
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r7, r0);
    goto loc_801A712C;
}

loc_801A7118:
{
    r0 = MemoryInline::FlatRead32((r7 + 4));
}

loc_801A7120:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A712C;
    }
}

loc_801A7124:
{
    MemoryInline::FlatWrite8((r3 + 51), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32(r7, r4);
}

loc_801A712C:
{
    r5 = (r5 + 8);
    r6 = (r6 + 1);
}

loc_801A7134:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_801A713C:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_801A70F8;
    }
}

loc_801A7140:
{
    r5 = MemoryInline::FlatRead32((r3 + 40));
    goto loc_801A7158;
}

loc_801A7148:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r5 = (r5 + 8);
}

loc_801A7158:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r4 + r0);
}

loc_801A7168:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_801A7148;
    }
}

loc_801A716C:
{
    r0 = MemoryInline::FlatRead8((r3 + 48));
}

loc_801A7174:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A7194;
    }
}

loc_801A7178:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 2040);
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = (r0 & -2);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 52), r0);
}

loc_801A7194:
{
    r0 = MemoryInline::FlatRead8((r3 + 49));
}

loc_801A719C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A71BC;
    }
}

loc_801A71A0:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 2040);
    r5 = MemoryInline::FlatRead32((r3 + 56));
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_3);
    r0 = (r0 & -2);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 56), r0);
}

loc_801A71BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 50));
}

loc_801A71C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A71E4;
    }
}

loc_801A71C8:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 2040);
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_5);
    r0 = (r0 & -2);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 60), r0);
}

loc_801A71E4:
{
    r4 = 0x80000000u;
    r4 = MemoryInline::FlatRead32((r4 + 12496));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801A71F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A7200;
    }
}

loc_801A71F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_801A7200:
{
    r4 = r29;
    r3 = 0;
    ctx->lr = 0x801A720Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A6D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x80000000u;
    r28 = MemoryInline::FlatRead32((r3 + 12488));
    goto loc_801A723C;
}

loc_801A7218:
{
    r3 = r29;
    r4 = r28;
    ctx->lr = 0x801A7224u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A6D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r29));
}

loc_801A7228:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A7238;
    }
}

loc_801A722C:
{
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x801A7238u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A6D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801A7238:
{
    r28 = MemoryInline::FlatRead32((r28 + 4));
}

loc_801A723C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801A7240:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A7218;
    }
}

loc_801A7244:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801A7248:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A72A0;
    }
}

loc_801A724C:
{
    r4 = MemoryInline::FlatRead32((r29 + 40));
    r0 = MemoryInline::FlatRead32((r29 + 44));
    r5 = r4;
    r3 = (r4 + r0);
    r0 = (r3 + 7);
    r0 = (r0 - r4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_801A7270:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A72A0;
    }
}

loc_801A7274:
{
    r3 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A727C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A728C;
    }
}

loc_801A7280:
{
    r0 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801A7288:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A7298;
    }
}

loc_801A728C:
{
    r0 = (r5 - r4);
    MemoryInline::FlatWrite32((r29 + 44), r0);
    goto loc_801A72A0;
}

loc_801A7298:
{
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A7274;
    }
}

loc_801A72A0:
{
    r5 = MemoryInline::FlatRead32((r29 + 32));
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x801A72B0u;
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
    r3 = r29;
    // inline leaf 0x801A6D30 (1 guest instruction(s))
    // end of inlined leaf 0x801A6D30
    r3 = 1;
}

loc_801A72BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A6FFC func_801A6FFC preserves=true fpr_mask=0x00000000
