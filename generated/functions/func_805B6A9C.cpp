#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B6A9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805B6A9C;

loc_805B6A9C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r3 = -804192256;
    r12 = MemoryInline::FlatRead32(r9);
    r11 = 552075264;
    r26 = MemoryInline::FlatRead8((r1 + 59));
    r0 = (r3 + -4096);
    r27 = r5;
    r11 = (r11 + 4095);
    r28 = r6;
    r3 = (r12 & r11);
    r0 = (r12 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = (0 - r3);
    r11 = MemoryInline::FlatRead32((r1 + 60));
    r29 = r7;
    r30 = r8;
    r0 = (r0 | r3);
    r31 = 0;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B6C20;
    }
}

loc_805B6AF8:
{
}

loc_805B6AFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805B6B4C;
    }
}

loc_805B6B00:
{
}

loc_805B6B04:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_805B6B4C;
    }
}

loc_805B6B08:
{
    f3.d = MemoryInline::FlatReadFloat32(r11);
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r10 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r11 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r10 + 52));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r11 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r10 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 10132));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B6B40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B6B4C;
    }
}

loc_805B6B44:
{
    r31 = 1;
    goto loc_805B6C20;
}

loc_805B6B4C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 28));
    r3 = 0x90000000u;
    f0.d = MemoryInline::FlatReadFloat32((r10 + 48));
    r3 = (r3 + 8192);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 32));
    r7 = 0;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 36));
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 36), f0.d);
    r6 = MemoryInline::FlatRead32(r9);
    r3 = (r6 & r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805B6BDC;
    }
}

loc_805B6B94:
{
    r6 = MemoryInline::FlatRead32(r4);
    r3 = 1074855936;
    r3 = (r3 + -12288);
    r6 = (r6 | 4);
    MemoryInline::FlatWrite32(r4, r6);
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 | 4);
    MemoryInline::FlatWrite32((r5 + 8), r6);
    r6 = MemoryInline::FlatRead32(r9);
    r3 = (r6 & r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805B6BDC;
    }
}

loc_805B6BC0:
{
    r3 = MemoryInline::FlatRead32(r4);
    r3 = (r3 | 128);
    MemoryInline::FlatWrite32(r4, r3);
    r6 = MemoryInline::FlatRead32(r9);
    r3 = (r6 & 268435456);
}

loc_805B6BD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805B6BDC;
    }
}

loc_805B6BD8:
{
    r7 = 1;
}

loc_805B6BDC:
{
}

loc_805B6BE0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_805B6C20;
    }
}

loc_805B6BE4:
{
    r3 = (r6 & 32768);
}

loc_805B6BE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805B6C08;
    }
}

loc_805B6BEC:
{
    r3 = MemoryInline::FlatRead32(r4);
    r3 = (r3 | 64);
    MemoryInline::FlatWrite32(r4, r3);
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r3 = (r3 | 64);
    MemoryInline::FlatWrite32((r5 + 8), r3);
    goto loc_805B6C20;
}

loc_805B6C08:
{
    r3 = MemoryInline::FlatRead32(r4);
    r3 = (r3 | 2);
    MemoryInline::FlatWrite32(r4, r3);
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite32((r5 + 8), r3);
}

loc_805B6C20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805B6C24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B6D2C;
    }
}

loc_805B6C28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B6C2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B6C78;
    }
}

loc_805B6C30:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r10 + 36));
    r0 = MemoryInline::FlatRead32(r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r5 + 8), r0);
}

loc_805B6C78:
{
    r6 = MemoryInline::FlatRead32((r10 + 24));
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r10 + 28));
    r4 = r28;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r0 = MemoryInline::FlatRead32((r10 + 32));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    // inline leaf 0x800855C0 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x800855C0
    r3 = (r28 + 12);
    r5 = (r1 + 8);
    r4 = r3;
    // inline leaf 0x80085580 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80085580
    r3 = (r1 + 8);
    ctx->lr = 0x805B6CB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 36));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32(r29, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 44));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 8), f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f4.d = (-(f4.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_805B6D2C:
{
    r11 = (r1 + 48);
    r3 = r31;
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC000FFF gpr_write=0xFC0018FB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B6A9C func_805B6A9C preserves=true fpr_mask=0x00000000
