#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80055FD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80055FD0;

loc_80055FD0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r31 = MemoryInline::FlatRead32(r3);
    f31.d = f1.d;
    r27 = r4;
    r30 = MemoryInline::FlatRead32((r31 + 24));
    r0 = (r30 & 3);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = (r30 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80056008:
{
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(14));
    r26 = (r26_rot_0 & 1);
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r25_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(13));
    r25 = (r25_rot_0 & 1);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r24_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(12));
    r24 = (r24_rot_0 & 1);
    r23_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(11));
    r23 = (r23_rot_0 & 1);
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(10));
    r29 = (r29_rot_0 & 1);
    r28 = (r30 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80056034;
    }
}

loc_8005602C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    goto loc_80056044;
}

loc_80056034:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r3 = (r31 + r0);
    r3 = (r3 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80056044:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80056048:
{
    MemoryInline::FlatWriteFloat32((r27 + 8), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80056058;
    }
}

loc_80056050:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    goto loc_8005606C;
}

loc_80056058:
{
    r0 = MemoryInline::FlatRead32((r31 + 36));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 36);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_8005606C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80056070:
{
    MemoryInline::FlatWriteFloat32((r27 + 12), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80056080;
    }
}

loc_80056078:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    goto loc_80056094;
}

loc_80056080:
{
    r0 = MemoryInline::FlatRead32((r31 + 40));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 40);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80056094:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80056098:
{
    MemoryInline::FlatWriteFloat32((r27 + 16), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800560A8;
    }
}

loc_800560A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 44));
    goto loc_800560BC;
}

loc_800560A8:
{
    r0 = MemoryInline::FlatRead32((r31 + 44));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 44);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_800560BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_800560C0:
{
    MemoryInline::FlatWriteFloat32((r27 + 20), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800560D0;
    }
}

loc_800560C8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    goto loc_800560E4;
}

loc_800560D0:
{
    r0 = MemoryInline::FlatRead32((r31 + 48));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_800560E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800560E8:
{
    MemoryInline::FlatWriteFloat32((r27 + 24), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800560F8;
    }
}

loc_800560F0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    goto loc_8005610C;
}

loc_800560F8:
{
    r0 = MemoryInline::FlatRead32((r31 + 52));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 52);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_8005610C:
{
}

loc_80056110:
{
    MemoryInline::FlatWriteFloat32((r27 + 28), f1.d);
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80056124;
    }
}

loc_80056118:
{
}

loc_8005611C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_800561A8;
    }
}

loc_80056120:
{
    goto loc_80056254;
}

loc_80056124:
{
    r0 = (r30 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80056128:
{
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r23 = (r23_rot_2 & 1);
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r24 = (r24_rot_2 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005613C;
    }
}

loc_80056134:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 56));
    goto loc_80056150;
}

loc_8005613C:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 56);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80056150:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80056154:
{
    MemoryInline::FlatWriteFloat32((r27 + 32), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80056164;
    }
}

loc_8005615C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 60));
    goto loc_80056178;
}

loc_80056164:
{
    r0 = MemoryInline::FlatRead32((r31 + 60));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 60);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80056178:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_8005617C:
{
    MemoryInline::FlatWriteFloat32((r27 + 36), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005618C;
    }
}

loc_80056184:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 64));
    goto loc_800561A0;
}

loc_8005618C:
{
    r0 = MemoryInline::FlatRead32((r31 + 64));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_800561A0:
{
    MemoryInline::FlatWriteFloat32((r27 + 40), f1.d);
    goto loc_80056254;
}

loc_800561A8:
{
    r0 = (r30 & 33554432);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800561AC:
{
    r23_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(6));
    r23 = (r23_rot_1 & 1);
    r24_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(5));
    r24 = (r24_rot_1 & 1);
    r25_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r25 = (r25_rot_1 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800561C4;
    }
}

loc_800561BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 68));
    goto loc_800561D8;
}

loc_800561C4:
{
    r0 = MemoryInline::FlatRead32((r31 + 68));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_800561D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_800561DC:
{
    MemoryInline::FlatWriteFloat32((r27 + 32), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800561EC;
    }
}

loc_800561E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    goto loc_80056200;
}

loc_800561EC:
{
    r0 = MemoryInline::FlatRead32((r31 + 72));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80056200:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80056204:
{
    MemoryInline::FlatWriteFloat32((r27 + 36), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80056214;
    }
}

loc_8005620C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 76));
    goto loc_80056228;
}

loc_80056214:
{
    r0 = MemoryInline::FlatRead32((r31 + 76));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 76);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80056228:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_8005622C:
{
    MemoryInline::FlatWriteFloat32((r27 + 40), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005623C;
    }
}

loc_80056234:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 80));
    goto loc_80056250;
}

loc_8005623C:
{
    r0 = MemoryInline::FlatRead32((r31 + 80));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80056250:
{
    MemoryInline::FlatWriteFloat32((r27 + 44), f1.d);
}

loc_80056254:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
}

loc_8005625C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005626C;
    }
}

loc_80056260:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80056264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80056298;
    }
}

loc_80056268:
{
    goto loc_800562C0;
}

loc_8005626C:
{
    r0 = (r30 & 8388608);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80056270:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005627C;
    }
}

loc_80056274:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    goto loc_80056290;
}

loc_8005627C:
{
    r0 = MemoryInline::FlatRead32((r31 + 84));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 84);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80056290:
{
    MemoryInline::FlatWriteFloat32((r27 + 48), f1.d);
    goto loc_800562C0;
}

loc_80056298:
{
    r0 = (r30 & 16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005629C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800562A8;
    }
}

loc_800562A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    goto loc_800562BC;
}

loc_800562A8:
{
    r0 = MemoryInline::FlatRead32((r31 + 88));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 88);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_800562BC:
{
    MemoryInline::FlatWriteFloat32((r27 + 48), f1.d);
}

loc_800562C0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF80003F gpr_write=0xFF80083B gpr_return=0x00000018 fpr_read=0x80000FFF fpr_write=0x80000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80055FD0 func_80055FD0 preserves=false fpr_mask=0x80000000
