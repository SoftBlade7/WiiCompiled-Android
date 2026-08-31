#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80156FAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80156FAC;

loc_80156FAC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 9;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80156FDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80156FF0;
    }
}

loc_80156FE0:
{
    r3 = 0x80340000u;
    r3 = (r3 + -24768);
    r0 = MemoryInline::FlatRead32((r3 + 4636));
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80156FF0:
{
    r3 = MemoryInline::FlatRead32(r4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80157694u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80156FFC:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80157430;
    }
}

loc_80157004:
{
    r3 = r29;
    r4 = 0;
    r5 = 250;
    ctx->lr = 0x80157014u;
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
    r3 = r30;
    r31 = 0;
    r4 = 512;
    r5 = 512;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801576F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015702C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80157048;
    }
}

loc_80157030:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
}

loc_80157048:
{
    r3 = r30;
    r4 = 513;
    r5 = 513;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801576F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015705C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80157078;
    }
}

loc_80157060:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r0));
}

loc_80157078:
{
    r3 = r30;
    r4 = 514;
    r5 = 514;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801576F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015708C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801570A8;
    }
}

loc_80157090:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_5 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
}

loc_801570A8:
{
    r3 = r30;
    r4 = 515;
    r5 = 515;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801576F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801570BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801570D8;
    }
}

loc_801570C0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_7 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
}

loc_801570D8:
{
    r3 = r30;
    r4 = 517;
    r5 = 517;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801576F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801570EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80157108;
    }
}

loc_801570F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_9 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
}

loc_80157108:
{
    r3 = r30;
    r4 = 516;
    r5 = 516;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801576F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015711C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015712C;
    }
}

loc_80157120:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
}

loc_8015712C:
{
    r3 = r30;
    r4 = 11;
    r5 = 11;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801576F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80157140:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015722C;
    }
}

loc_80157144:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = 80;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(80));
}

loc_80157150:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80157158;
    }
}

loc_80157154:
{
    r4 = r0;
}

loc_80157158:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8015715C:
{
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r8 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8015722C;
    }
}

loc_80157168:
{
}

loc_8015716C:
{
    r5 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_80157200;
    }
}

loc_80157174:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80157190;
    }
}

loc_8015717C:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_80157188:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80157190;
    }
}

loc_8015718C:
{
    r6 = 1;
}

loc_80157190:
{
}

loc_80157194:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80157200;
    }
}

loc_80157198:
{
    r0 = (r5 + 7);
    r3 = (r29 + 11);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_801571AC:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80157200;
    }
}

loc_801571B0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r7);
    r8 = (r8 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r7 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r7 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r7 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r7 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r7 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r7 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r7 + 7));
    r7 = (r7 + 8);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801571B0;
    }
}

loc_80157200:
{
    r3 = (r29 + r8);
    r0 = (r4 - r8);
    r3 = (r3 + 11);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r4));
}

loc_80157214:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015722C;
    }
}

loc_80157218:
{
    r0 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80157218;
    }
}

loc_8015722C:
{
    r3 = r30;
    r4 = 257;
    r5 = 257;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801576F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80157240:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015732C;
    }
}

loc_80157244:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = 80;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(80));
}

loc_80157250:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80157258;
    }
}

loc_80157254:
{
    r4 = r0;
}

loc_80157258:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8015725C:
{
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r8 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8015732C;
    }
}

loc_80157268:
{
}

loc_8015726C:
{
    r5 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_80157300;
    }
}

loc_80157274:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80157290;
    }
}

loc_8015727C:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_80157288:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80157290;
    }
}

loc_8015728C:
{
    r6 = 1;
}

loc_80157290:
{
}

loc_80157294:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80157300;
    }
}

loc_80157298:
{
    r0 = (r5 + 7);
    r3 = (r29 + 91);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    ctr = r0;
}

loc_801572AC:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80157300;
    }
}

loc_801572B0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r7);
    r8 = (r8 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r7 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r7 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r7 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r7 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r7 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r7 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r7 + 7));
    r7 = (r7 + 8);
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801572B0;
    }
}

loc_80157300:
{
    r3 = (r29 + r8);
    r0 = (r4 - r8);
    r3 = (r3 + 91);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r4));
}

loc_80157314:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015732C;
    }
}

loc_80157318:
{
    r0 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80157318;
    }
}

loc_8015732C:
{
    r3 = r30;
    r4 = 10;
    r5 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801576F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80157340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80157438;
    }
}

loc_80157344:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = 80;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(80));
}

loc_80157350:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80157358;
    }
}

loc_80157354:
{
    r4 = r0;
}

loc_80157358:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8015735C:
{
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r8 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80157438;
    }
}

loc_80157368:
{
}

loc_8015736C:
{
    r5 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_80157400;
    }
}

loc_80157374:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80157390;
    }
}

loc_8015737C:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_80157388:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80157390;
    }
}

loc_8015738C:
{
    r6 = 1;
}

loc_80157390:
{
}

loc_80157394:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80157400;
    }
}

loc_80157398:
{
    r0 = (r5 + 7);
    r3 = (r29 + 171);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    ctr = r0;
}

loc_801573AC:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80157400;
    }
}

loc_801573B0:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, r7);
    r8 = (r8 + 8);
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r7 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r7 + 2));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r7 + 3));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r7 + 4));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r7 + 5));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r7 + 6));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r7 + 7));
    r7 = (r7 + 8);
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801573B0;
    }
}

loc_80157400:
{
    r3 = (r29 + r8);
    r0 = (r4 - r8);
    r3 = (r3 + 171);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r4));
}

loc_80157414:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80157438;
    }
}

loc_80157418:
{
    r0 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80157418;
    }
}

loc_8015742C:
{
    goto loc_80157438;
}

loc_80157430:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r28, r0);
}

loc_80157438:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80156FAC func_80156FAC preserves=true fpr_mask=0x00000000
