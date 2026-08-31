#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078ACB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8078AD4C_loc_0 = 0;
    uint32_t addr_lfsx_8078AD64_loc_0 = 0;
    uint32_t addr_lfsx_8078ADF0_loc_0 = 0;
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8078ACB8;

loc_8078ACB8:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 128);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
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
    // end of inlined leaf 0x80021584
    r4 = 0x808A0000u;
    r23 = r3;
    r4 = (r4 + 18464);
    r25 = 0;
    f30.d = MemoryInline::FlatReadFloat32((r4 + 228));
    r28 = r23;
    f31.d = MemoryInline::FlatReadFloat32((r4 + 248));
    r31 = (r4 + 40);
    r22 = (r4 + 16);
    r29 = 0x809C0000u;
    r30 = 0x809C0000u;
}

loc_8078AD08:
{
    r24 = MemoryInline::FlatRead32((r28 + 1184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(42));
}

loc_8078AD10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078AE5C;
    }
}

loc_8078AD14:
{
    r3 = (r1 + 20);
    r4 = (r29 + 12048);
    r5 = (r30 + 12072);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = r24;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CD3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = (r25 + 1);
}

loc_8078AD34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8078AD44;
    }
}

loc_8078AD38:
{
}

loc_8078AD3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8078AD5C;
    }
}

loc_8078AD40:
{
    goto loc_8078AD70;
}

loc_8078AD44:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    addr_lfsx_8078AD4C_loc_0 = (r31 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078AD4C_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    goto loc_8078AD70;
}

loc_8078AD5C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    addr_lfsx_8078AD64_loc_0 = (r31 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078AD64_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
}

loc_8078AD70:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = (r1 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r4 = (r1 + 20);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f30.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    // inline leaf 0x802302C4 (18 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 24), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 32), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 36), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x802302C4
    r26 = (r23 + r24);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r0 = MemoryInline::FlatRead8((r26 + 1140));
    r27 = (r23 + r3);
    r21 = 0;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r27 + r0);
    r20 = MemoryInline::FlatRead32((r3 + 132));
}

loc_8078ADB4:
{
    r3 = MemoryInline::FlatRead32((r20 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8078ADC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078ADD0;
    }
}

loc_8078ADC4:
{
    r5 = (r1 + 32);
    r4 = 0;
    ctx->lr = 0x8078ADD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_8078ADD0:
{
    r21 = (r21 + 1);
    r20 = (r20 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(2));
}

loc_8078ADDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8078ADB4;
    }
}

loc_8078ADE0:
{
    r3 = r24;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CD3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r1 + 32);
    addr_lfsx_8078ADF0_loc_0 = (r22 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078ADF0_loc_0);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r5 = (r1 + 20);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    // inline leaf 0x802300C8 (20 guest instruction(s))
    f5.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f6.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteRamFloat32(r3, f6.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 32), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 36), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 24), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x802300C8
    r0 = MemoryInline::FlatRead8((r26 + 1140));
    r21 = 0;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r27 + r0);
    r24 = MemoryInline::FlatRead32((r3 + 468));
}

loc_8078AE20:
{
    r3 = MemoryInline::FlatRead32((r24 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8078AE2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078AE3C;
    }
}

loc_8078AE30:
{
    r5 = (r1 + 32);
    r4 = 0;
    ctx->lr = 0x8078AE3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_8078AE3C:
{
    r21 = (r21 + 1);
    r24 = (r24 + 4);
}

loc_8078AE48:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(2))) {
        goto loc_8078AE20;
    }
}

loc_8078AE4C:
{
    r25 = (r25 + 1);
    r28 = (r28 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(3));
}

loc_8078AE58:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8078AD08;
    }
}

loc_8078AE5C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 128);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 128));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
        r20 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -48));
        r21 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -44));
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 40u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 44u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF0007F gpr_write=0xFFF0087B gpr_return=0x00000018 fpr_read=0xC000007F fpr_write=0xC000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8078ACB8 func_8078ACB8 preserves=false fpr_mask=0xC0000000
